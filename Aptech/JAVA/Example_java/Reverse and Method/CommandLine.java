//Using Command-Line Arguments
public class CommandLine 
{
   public static void main(String args[]) 
   { 
      //CommandLine c1=new CommandLine();
      
      for(int i = 0; i<args.length; i++) 
      {
         System.out.println("args[" + i + "]:= " +  args[i]);
      }

   }
}