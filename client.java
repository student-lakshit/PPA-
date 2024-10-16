import java.net.*;
import java.io.*;

class client
{
    public static void main (String Arg[]) throws Exception
    {
        System.out.println("Client application is running...");

        Socket sobj = new Socket("localhost",2100);
        printStream ps = new PrintStream(sobj.getOutputStream());
        BufferReader br1 = new BufferedReader(new InputStream(sobj.getinputStream()));
        BufferReader br2 = new BufferedReader(new InputStream(sobj.getinputStream()));
        String str1, str2;
        while(!(str1 = br2.readLine()).equals("end"))
        {
            System.out.println(str1);
            str2 = br1.readLine();
            System.out.println("enter message for server : ");
            System.out.println("server says : "+str2);



        }
;    }
}