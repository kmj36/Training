#include <iostream>
#include <string>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
    {
        std::cout << "Usage: " << argv[0] << " [IP] [Port]" << std::endl;
        return 0;
    }

    std::string srcip = argv[1];
    uint16_t srcport = atoi(argv[2]);
    sockaddr_in serveraddrinfo;
    int sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (!srcport)
    {
        std::cout << "Usage: " << argv[0] << " [IP] [Port]" << std::endl;
        return 0;
    }
        

    if (sock == -1)
    {
        std::cout << "소켓을 열 수 없었습니다. Status: " << sock << std::endl;
        return -1;
    }

    memset(&serveraddrinfo, 0, sizeof(serveraddrinfo));
    serveraddrinfo.sin_addr.s_addr = inet_addr(srcip.c_str());
    serveraddrinfo.sin_family = AF_INET;
    serveraddrinfo.sin_port = htons(srcport);

    if (connect(sock, (struct sockaddr *)&serveraddrinfo, sizeof(serveraddrinfo)) == -1)
    {
        std::cout << "호스트가 응답하지 않습니다. Status: " << sock << std::endl;
        return -2;
    }

    std::cout << "연결되었습니다. " << srcip << ":" << srcport << std::endl;
    while(1)
    {
        char* buffer = new char[1024];

        std::cout << "> ";
        std::cin >> buffer;
        if(strcmp(buffer, "/Quit") == 0)
            break;
        
        send(sock, buffer, strlen(buffer)+1, 0);
        memset(buffer, 0, sizeof(buffer));
        recv(sock, buffer, sizeof(buffer), 0);
        std::cout << "< " << buffer << std::endl;
    }

    shutdown(sock, SHUT_RDWR);
    return 0;
}