import java.util.*;
public class ReadConsole2 
{
   public static void main(String args[]) 
   {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter characters, 'q' to quit.");
      String s;
      do 
      {
          s = sc.nextLine();
          System.out.print(s);
      } 
		 while(!s.equals("q"));
      	 
   }
}