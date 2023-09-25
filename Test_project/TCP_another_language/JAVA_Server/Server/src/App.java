import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class App {
    public static void main(String[] args) throws IOException {
        if (args.length < 1)
        {
            System.out.printf("Usage: %s [Port]\n", System.getProperty("sun.java.command").split(" ")[1]);
            return;
        }
        int Port = Integer.parseInt(args[0]);
        ServerSocket Ssock = new ServerSocket(Port);
        System.out.printf("Server Open %s\n", Ssock.getLocalSocketAddress());
    }
}
