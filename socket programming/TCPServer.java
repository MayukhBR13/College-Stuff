import java.io.*;
import java.util.*;
import java.net.*;
public class TCPServer 
{
    public static void main(String args[])throws IOException
    {
        String s,capS;
        ServerSocket servSock=new ServerSocket(2345);

        while(true){
            Socket cliSock=servSock.accept();
            Scanner in = new Scanner(cliSock.getInputStream());
            DataOutputStream out = new DataOutputStream(cliSock.getOutputStream());

            s=in.nextLine();
            capS=s.toUpperCase();
            out.writeBytes(capS);
            cliSock.close();
        }

    }    
}
