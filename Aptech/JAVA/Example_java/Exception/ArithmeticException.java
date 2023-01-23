//take 2 int at runtime and display the quotient if both the numbers are 
//positive or negative  and display the exceptional message if the second number is 0
import java.util.*;

public class ArithmeticException
{
	public static void main(String args[]) 
	{
		int i,j,r;
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the First number: ");
		i=sc.nextInt();
		System.out.println("Enter the Second number: ");
		j=sc.nextInt();
		
		try 
		{
		   r=i/j;
		   System.out.println("The result is:=   "+r);
		}	
		catch(Exception e)
		{
			 System.out.println("Exception thrown  :" + e);
		}

  }
}