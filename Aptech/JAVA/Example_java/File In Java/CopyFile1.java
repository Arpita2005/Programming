import java.io.*;
public class CopyFile1 
{
   public static void main(String args[]) throws IOException 
   {
      FileReader in = null;
      // FileReader is Character Based, it can be used to read characters
      FileWriter out = null;

      try 
	  {
         in = new FileReader("input1.txt");
         out = new FileWriter("output1.txt");
         
         int c;
         while ((c = in.read()) != -1) 
		 {
            out.write(c);
       }
      }
	  finally 
	  {
         if (in != null) 
		 {
            in.close();
       }
         if (out != null) 
		 {
            out.close();
       }
      }
   }
}