import java.io.*;
import java.net.*;
import java.util.*;
public class TCPClient {
    public static void main(String args[])throws IOException
    {
        String s,capS;
        System.out.println("Enter the String: ");
        Scanner  in=new Scanner (System.in);
        Socket clnSock=new Socket("localhost",2345);
        DataOutputStream out=new DataOutputStream(clnSock.getOutputStream());
        Scanner inFromSer=new Scanner (clnSock.getInputStream());
        s=in.nextLine();
        out.writeBytes(s+"\n");
        capS=inFromSer.nextLine();
        System.out.println(" output: "+capS);
        clnSock.close();
    }
}
