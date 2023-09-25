#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <poll.h>
#include <errno.h>
#include <unistd.h>
#include <sys/inotify.h>

#include "TextColoring/text_coloring.h"

int fd;
int wd;
 
static void __handle_inotify_event(const struct inotify_event *event, const char *systemcommand)
{
    if (event->mask & IN_MODIFY)
    {
        system("clear");
        system(systemcommand);
        std::cerr << coloring::coloringText("Start Command for IN_MOFIFY", coloring::Color::GREEN) << std::endl;
        std::cerr << coloring::coloringText("name = ", coloring::Color::GREEN) << coloring::coloringText(event->name, coloring::Color::RED) << std::endl;
        std::cerr << coloring::coloringText("Command = ", coloring::Color::GREEN) << coloring::coloringText(systemcommand, coloring::Color::RED) << '\n' << std::endl;
        std::ifstream readChangeFile;
        readChangeFile.open(event->name);
        if(readChangeFile.is_open())
        {
            while(!readChangeFile.eof())
            {
                std::string str;
                getline(readChangeFile, str);
                std::cerr << coloring::coloringText(str, coloring::Color::YELLOW) << std::endl;
            }
            readChangeFile.close();
        }
    }
}

void exit_process(int s)
{
    std::cerr << coloring::coloringText("Exit Process", coloring::Color::RED) << std::endl;

    int ret = inotify_rm_watch(fd, wd);
    if (ret < 0) {
        fprintf(stderr, "Failed to rm watch [fd : %d] [wd : %d] [%s]", fd, wd, strerror(errno));
        perror("inotify_rm_watch");
        exit(EXIT_FAILURE);
    }
    exit(1);
}
 
int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf("Usage: %s <INOTIFY_PATH> <SYSTEMCOMMAND>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char buf[4096] __attribute__ ((aligned(__alignof__(struct inotify_event))));
    char *ptr;
    ssize_t size;
    const struct inotify_event *event;
    struct sigaction sigact;

    sigact.sa_handler = exit_process;
    sigemptyset(&sigact.sa_mask);
    sigact.sa_flags = 0;

    sigaction(SIGINT, &sigact, NULL);
 
    fd = inotify_init();
    if (fd < 0) {
        perror("inotify_init");
        exit(EXIT_FAILURE);
    }
 
    wd = inotify_add_watch(fd, argv[1], IN_MODIFY | IN_CREATE | IN_DELETE);
    if (wd < 0) {
        fprintf(stderr, "Failed to add watch [%s] [%s]", argv[1], strerror(errno));
        perror("inotify_add_watch");
        exit(EXIT_FAILURE);
    }
 
    while (1) {
        size = read(fd, buf, sizeof(buf));
        if (size == -1 && errno != EAGAIN) {
            perror("read");
            fprintf(stderr, "read : %s", strerror(errno));
            exit(EXIT_FAILURE);
        }
 
        if (size <= 0)
            break;
 
        for (ptr = buf; ptr < buf + size; ptr += sizeof(struct inotify_event) + event->len) {
            event = (struct inotify_event *)ptr;
            __handle_inotify_event(event, argv[2]);
        }
    }

    return 0;
}
 