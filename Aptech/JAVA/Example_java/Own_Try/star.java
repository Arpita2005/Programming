import java.io.*;
import java.util.Scanner;
public class star
{
    public static void main(String[] args) {
        char s='*';
        int row;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows :\n");
        row=sc.nextInt();
        for(int i=0;i<=row;i++)
        {
            for(int j=0;j<i;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
