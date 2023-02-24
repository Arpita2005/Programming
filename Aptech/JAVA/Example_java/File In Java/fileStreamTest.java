import java.io.*;
public class fileStreamTest 
{
   public static void main(String args[]) 
   {   
      try 
	  {
         byte bWrite [] = {65,66,67,68,69,70};
         OutputStream os = new FileOutputStream("test.txt");
         for(int x = 0; x < bWrite.length ; x++) 
		 {
            os.write(bWrite[x] );   // writes the bytes
         }
         os.close();     
         InputStream is = new FileInputStream("test.txt");
         int size = is.available();
       // available() is used to get the length of the file test.txt  
         for(int i = 0; i < size; i++) 
		 {
            System.out.print((char)is.read() + "  ");
         }
         is.close();
      }
	  catch(IOException e) 
	  {
         System.out.print("Exception");
      }	
   }
}