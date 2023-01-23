import java.io.*;
import java.util.Scanner;
public class matrix_serch_indices 
{
    public static void main(String args[])
    {
        Scanner one = new Scanner(System.in);
        int row,coloumn;
        System.out.println("Enter the number of rows:\n");
        row=one.nextInt();
        System.out.println("Enter the number of coloums:\n");
        coloumn=one.nextInt();
        int[][] number=new int[row][coloumn];
        System.out.println("The matrix is:\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<coloumn;j++)
            {
                number[i][j]=one.nextInt();
            }
        }
        System.out.println("Enter the number to search:\n");
        int x=one.nextInt();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<coloumn;j++)
            {
                if(number[i][j]==x)
                {
                    System.out.println("x found at location " +i+" "+j);
                    System.out.println("...............................");
                }
            }
        }

    }
}
