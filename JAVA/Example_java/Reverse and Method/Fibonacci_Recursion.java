import java.util.*;
public class Fibonacci_Recursion 
{  
	    static int n1=0,n2=1,n3;
		      
	     public static void fibo(int count)
		 {      
	        if(count!=0)
			{      
	             n3 = n1 + n2; 
				 System.out.print(" "+n1);     				 
	             n1 = n2;      
	             n2 = n3;  
	             fibo(count-1);      
	        }      
		 } 
		 public static void main(String args[])
		 {  
			int n;
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the limit: ");
			n=sc.nextInt();
			fibo(n);     
		 }  
}
