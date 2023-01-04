import java.io.*;
import java.util.Scanner;
public class half_pyramid 
{
    public static void main(String args[])
    {
        Scanner one=new Scanner(System.in);
        int i,j,row;
        System.out.println("Enter the number of rows:\n");
        row=one.nextInt();
        System.out.println("=========================\n");
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println(" ");
        }
        System.out.println();
}
}
