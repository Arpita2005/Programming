import java.io.*;
import java.util.Scanner;
public class inverted_half_pyra
{
    public static void main(String args[])
    {
        Scanner star=new Scanner(System.in);
        int row,i,j;
        System.out.println("Enter the number of rows:\n");
        row=star.nextInt();
        for(i=row;i>=1;i--)
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
