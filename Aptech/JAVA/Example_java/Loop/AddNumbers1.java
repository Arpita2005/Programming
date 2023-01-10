import java.util.Scanner;

public class AddNumbers1 
{
    public static void main(String args[]) 
	{
        Scanner s = new Scanner(System.in);
        int sum = 0;
        int num;		
        do
		{
         System.out.print("Enter a number (0 to stop): ");
         num=s.nextInt();
         sum=sum+num;
        }
		while(num!=0);
		
        System.out.println("The sum of the numbers is " + sum);
    }
}