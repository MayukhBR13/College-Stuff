import java.io.*;
import java.net.*;
import java.util.Date;
public class TimeClient {
    private final static int PORT =1313;
    public static void main(String args[])throws IOException,UnknownHostException
    {

        Socket sock=null;
        ObjectInputStream in=null;
        try{
            sock=new Socket("localhost",PORT);
            in=new ObjectInputStream(sock.getInputStream());
        }catch(UnknownHostException err){
            System.out.println("Server Localhost not found ");
            System.exit(1);
        }
        catch(IOException err){
            System.out.println(" Error during Connection ");
            System.exit(1);
        }

        try{
            Date dt=(Date)in.readObject();
            System.out.println(" Reply from server : "+dt);
        }catch(ClassNotFoundException err){
            System.out.println(err);
            System.exit(1);
        }
        in.close();
        sock.close();
    }    
}
