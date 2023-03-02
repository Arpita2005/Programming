/* Copy content of one file into another and display the content of that file */
import java.io.*;
public class CopyFileAndDisplay 
{
   public static void main(String args[]) throws IOException 
   {  
      FileInputStream in = null;
      FileOutputStream out = null;
	  int bytes=0;

      try 
	  {
         in = new FileInputStream("input.txt");
         out = new FileOutputStream("output.txt");
         
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
	  File file = new File("output.txt");
	  // Code to know the no of bytes in the content of the file 
      if (file.exists()) 
	  { 
         bytes = (int)file.length();
      }
      else
	  {
         System.out.println("File does not exist!");
      }
	  // Code ends here
	  byte buffer[]=new byte[bytes];   // Declare byte array 
	  try
	  {
		FileInputStream fin=new FileInputStream("output.txt");
		fin.read(buffer,0,bytes);
		/* Read Content of output.txt and store in buffer 
		 buffer - byte array name , 0 - starting index of array 
		  bytes  - length of byte array  */		
	  }	
	  catch(Exception e)
	  {  
	    System.out.println("Error:="+e.toString());  
	  }
	  String ss=new String(buffer,0);
	  // Storing content of byte array to String class object
	  System.out.println(ss);  // Print the string at console 
   }
}