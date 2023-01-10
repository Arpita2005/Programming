import java.util.*;

public class PrimeNumber 
{  
		public static void main(String[] args) 
		{  
			int i,flag=0,n;
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the number:     "); 
			n=sc.nextInt();
			for(i=2; i <= n/2; ++i)
			{
				if(n%i == 0)
					flag=1;
			}
			if(flag==1)
			  System.out.println("Non Prime No");  
			else
			  System.out.println("Prime No");  
			
		}  
}  
