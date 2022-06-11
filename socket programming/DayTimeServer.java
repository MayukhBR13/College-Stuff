import java.io.*;
import java.net.*;
import java.util.Date;
public class DayTimeServer {
    private final static int PORT=1313;
    public static void main(String args[])throws IOException
    {
        ServerSocket servSock=null;
        Socket cliSock=null;
        servSock=new ServerSocket(PORT);
        while(true){
            try{
                cliSock=servSock.accept();
            }catch(IOException err){
                System.out.println(err);
                System.exit(1);
            }
            ObjectOutputStream out=new ObjectOutputStream(cliSock.getOutputStream());
            out.writeObject(new Date());
            out.close();
            cliSock.close();
        }
    }
}
