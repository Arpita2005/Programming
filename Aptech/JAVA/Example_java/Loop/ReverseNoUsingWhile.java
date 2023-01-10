import java.util.*;
class ReverseNoUsingWhile
{
	public static void main(String args[])
	{
		int num,n,rem,rev=0;
		System.out.println(" Enter a number  ");
		Scanner sc=new Scanner(System.in);
		num=sc.nextInt();
		n=num;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		System.out.println(" The reverse no of the original no=  "+num+"   is  "+rev);
				
		
	}
}