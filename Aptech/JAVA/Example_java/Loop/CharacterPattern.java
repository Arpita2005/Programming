import java.util.*;
class CharacterPattern
{  
    public static void main(String args[])
    { 
		   int i,j,n;
		   char ch;
		   System.out.println("Enter the number of rows ");
		   Scanner sc=new Scanner(System.in);
		   n=sc.nextInt();
		   System.out.println("Enter a character for pattern print ");
		   Scanner sc1=new Scanner(System.in);
		   ch=sc1.next().charAt(0);
		   System.out.println("\n The pattern is  \n");
		   for(i=1;i<=n;i++)
		   {
		     for(j=1;j<=i;j++)			 
			      System.out.print(ch+" ");			 
			 System.out.println();
		   }
		   
    }
}