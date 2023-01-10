import java.util.*;

class Pattern112112321
{
	public static void main(String[] args)
	{
		int x,y,z,a,n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the no of rows:    ");
		n=sc.nextInt();
		for(x=1;x<=n;x++)
		{
			//for(y=1;y<=n-x;y++)
			for(y=n-1;y>=x;y--)
				System.out.print("  ");
			for(z=1;z<=x;z++)
				System.out.print(z+" ");
			for(a=z-2;a>=1;a--)
				System.out.print(a+" ");
			System.out.println();
		}

   }
}