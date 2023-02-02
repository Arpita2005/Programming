// import java.io.File;
// import java.io.FileReader;
// import java.io.IOException;
import java.io.*;
public class ReadData_Demo 
{
   public static void main(String args[]) 
   {
      FileReader fr = null;		
      try 
	  {
         File file1 = new File("File.txt");
         fr = new FileReader(file1); 
		 char [] a = new char[50];
         fr.read(a);   // reads the content to the array
         for(char c : a)
            System.out.print(c);   // prints the characters one by one
      }
	  catch(IOException e) 
	  {
         e.printStackTrace();
      }
	  finally 
	  {
         try 
		 {
            fr.close();
         }
		 catch(IOException ex) 
		 {		
            ex.printStackTrace();
         }
      }
   }
}