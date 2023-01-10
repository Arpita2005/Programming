import java.util.*;

public class AsteriskPattern
{
	public static void main(String args[])
	{
		int i,space,rows,k=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number of rows: ");
		rows=sc.nextInt();
		for(i=1;i<=rows;++i)
		{
			for(space=1;space<=rows-i;++space)
			{
				System.out.print("  ");
			}
			while(k!=2*i-1)
			{
			   System.out.print("* ");
			   ++k;
		    }
		    k=0;

		  System.out.println();

	  }

	}
}