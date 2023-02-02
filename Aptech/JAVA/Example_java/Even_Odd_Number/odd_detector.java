package Even_Odd_Number;

import java.util.Scanner;

public class odd_detector
{
    Scanner input=new Scanner(System.in);
    public void odd_detector()
    {
        char[] num;
        //String num;
        System.out.println("Odd numbers print\n");
        System.out.println("+======================+\n");
        System.out.println("Enter a number to print it after removing even digits:\n");
        num=input.next().toCharArray();
        System.out.println("After removing even number\nThe Final Number is:\n");
        System.out.println(".......................\n");
        for (int i=0;i<num.length;i++)
        {
            if(num[i]%2!=0)
            {
                System.out.print(num[i]);
            }
        }
        System.out.println("\n\n\n");
    }
}
