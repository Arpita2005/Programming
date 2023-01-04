import java.io.*;
import java.util.Scanner;
public class solid_rect
 {
    public static void main(String args[])
{
    Scanner input=new Scanner(System.in);
    int i,j,row,coloumn;
    System.out.println("Enter the number of rows:\n");
    row=input.nextInt();
    System.out.println("Enter the number of coloumns:\n");
    coloumn=input.nextInt();
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=coloumn;j++)
        {
            System.out.print("*");
        }
        System.out.println();
    }
}
}
