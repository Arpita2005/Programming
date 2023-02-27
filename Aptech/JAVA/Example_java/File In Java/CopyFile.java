import java.io.*;
public class CopyFile 
{
   public static void main(String args[]) throws IOException 
   {  
      FileInputStream in = /*null*/ new FileInputStream("input.txt");
      FileOutputStream out = /*null*/ new FileOutputStream("output.txt");

      try 
	  {
         //in = new FileInputStream("input.txt");
         //out = new FileOutputStream("output.txt");
         int c;
         while ((c = in.read()) != -1) 
		 {
            out.write(c);
         }
         // in.close();
         // out.close();
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
/*
 * FileInputStream / Outputstream is Byte Based, it can be used to read bytes. 
 * A file output stream is an output stream for writing data to a File or to a FileDescriptor.
 *  In particular, allow a file to be opened for writing by only one FileOutputStream (or other file-writing object) at a time. 
 * In such situations the constructors in this class will fail if the file involved is already open.
 * A FileInputStream obtains input bytes from a file in a file system. What files are available depends on the host environment.
 * To release resources used by this stream close() should be called directly or by try-with-resources. Subclasses are responsible for the cleanup of resources acquired by the subclass.
 * Subclasses that override Object.finalize() in order to perform cleanup should be modified to use alternative cleanup mechanisms such as Cleaner and remove the overriding finalize method.
 */