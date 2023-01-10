import java.util.Scanner;

public class AddNumbers 
{
    public static void main(String args[]) 
	{
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of numbers that you wish to add: ");
        int count = s.nextInt();
        int sum = 0;
        for (int i = 1; i <= count; i++) 
		{
            System.out.print("Enter number " + i + ": ");
            sum = sum + s.nextInt();
        }
        System.out.println("The sum of the numbers is " + sum);
    }
}