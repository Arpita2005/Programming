import java.util.*;
import java.io.*;

public class SqrtDemo
{
		public static void main(String args[])
		{
			float input;
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter a number:     ");
			input=sc.nextFloat();
			SquareRootExcption sqe=new SquareRootExcption(input);
			try
			{
				sqe.getSqrt();
			}
			catch(SquareRootExcption ex)
			{  
				System.out.println("Square Root of negative number is imaginary or invalid");
				//ex.printStackTrace();  
			}
		}
}