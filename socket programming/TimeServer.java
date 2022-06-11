import java.io.*;
import java.net.*;
import java.util.Date;
public class TimeServer 
{
    private final static int PORT =1313;
    public static void main(String args[])throws IOException
    {

        ServerSocket servSock=null;
        try{
            servSock=new ServerSocket(PORT);    
        }catch(IOException err){
            System.out.println("Could not listen to the port "+PORT+"\nError:"+err);
            System.exit(1);
        }

        Socket clnSock=null;
        for(;;)
        {
            try{
                clnSock = servSock.accept();
            }catch(IOException err){
                System.out.println("Accept Failed ");
                System.exit(1);
            }

            ObjectOutputStream out=new ObjectOutputStream(clnSock.getOutputStream());
            out.writeObject(new Date());
            out.close();
            clnSock.close();

        }
    }    
}
