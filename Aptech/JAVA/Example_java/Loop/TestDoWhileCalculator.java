import java.util.*;
public class TestDoWhileCalculator 
{
   public static void main(String args[]) 
   {
      int x,y,r;
	  char ch;
	  Scanner sc=new Scanner(System.in);
	  Scanner sc2=new Scanner(System.in);
      do 
	  {
         System.out.print("Enter the 1 st number:    ");
		 x=sc.nextInt();
		 System.out.print("Enter the 2 nd number:    ");
		 y=sc.nextInt();
		 r=x+y;
		 System.out.println("Result:   = "+r);
		 System.out.print("Do u want 2 continue?  :  y for yes , n  for no ");
		 ch=sc2.next().charAt(0);	 
         
      }
	  while( ch!='n');
   }
}