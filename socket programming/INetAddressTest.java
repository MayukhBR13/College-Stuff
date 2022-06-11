import java.net.*;
import java.util.*;
public class INetAddressTest
{
    public static void main(String args[])throws UnknownHostException
    {
        InetAddress a=InetAddress.getLocalHost();
        System.out.print("Website URL: ");
        Scanner sc=new Scanner(System.in);
        String url=sc.nextLine();
        InetAddress b=InetAddress.getByName(url);
        System.out.println("Local IP Address: "+a);
        System.out.println("IP Address of "+url+" : "+b);
        sc.close();
    }
}