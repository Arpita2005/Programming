import java.io.File;
public class ReadDir 
{
   public static void main(String[] args) 
   {
      File file =  new File("."); /*null*/
      String[] paths;  
      try 
	  {      
         /*  create new file object
         //file = new File(".");  //current location
         //file = new File("E:/Sourav_Dutta_Aptech/");
         // array of files and directory */
         paths = file.list();
         
         for(String path:paths)   // for each name in the path array
		 {
            System.out.println(path);  // prints filename and directory name
       }
      }
	  catch(Exception e) 
	  {
         // if any error occurs
         e.printStackTrace();
      }
   }
}