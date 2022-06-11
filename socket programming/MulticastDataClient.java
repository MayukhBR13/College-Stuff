import java.io.*;
import java.net.*;
import java.util.Date;
public class MulticastDataClient {
    public static void main(String args[])throws IOException
    {
        MulticastSocket socket = new MulticastSocket(1313);
        InetAddress group = InetAddress.getByName("230.0.0.1");
        socket.joinGroup(group);
        for (int i=0;i<10;i++){
            byte[] bytes = new byte[30];
            DatagramPacket packet = new DatagramPacket(bytes,bytes.length);
            socket.receive(packet);
            String received = new String(packet.getData());
            System.out.println(received);
        }
        socket.leaveGroup(group);
        socket.close();
    }
}
