import java.io.*;
// import java.io.File;
// import java.io.FileReader;
// import java.io.IOException;

public class ReadDemo {

   public static void main(String args[]) 
   {
      FileReader fr = null;		
      try 
	  {
        // File file = new File("file.txt");
         fr = new FileReader("file.txt"); 
		 char [] a = new char[200];
         fr.read(a);                            // reads the content to the array
         for(char c : a)
            System.out.print(c);                    // prints the characters one by one
         fr.close();
      }
	  catch(IOException e) 
	  {
         e.printStackTrace();
      }
	      //   finally {
         //       try 
	      //{fr.close();}}
	      // 	 catch(IOException ex) 
	      // 	 {		    ex.printStackTrace();}}
         //                                               
   }
}