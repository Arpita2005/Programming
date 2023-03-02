/*Make a reverse of a file */
import java.io.*;
public class file_rev 
{
    public static void main(String[] args) throws IOException 
    {
        File fp=new File("Sample.txt");
        int c;
        int bytes =0;
        if(fp.exists())
        {
            bytes=(int) fp.length();
        }
        else
        {
            System.out.println("The file Is Empty \n");
        }
        byte ob[] = new byte[bytes];
        try {
            FileInputStream fin=new FileInputStream("Sample.txt");
            fin.read(ob,0,bytes);
            String s=new String(ob,0);
           // System.out.println(s);   
            for(int i=s.length()-1;i>=0;i--)
            {
                System.out.print(s.charAt(i));
            }
            
        } catch (Exception e) 
        {
            System.out.println("Sorry !!\n");
        }
       
    }
}
