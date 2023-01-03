import java.io.*;
import java.util.Scanner;
public class final_selling_price 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int selling_price;
        float dis,total;
        System.out.println("Enter the selling price:\n");
        selling_price=sc.nextInt();
        dis=(float) (selling_price/0.2);
        System.out.println("After giving discount of 20% your bill is:\n"+dis);
        total=dis+500;
        System.out.println("Your Final Bill is:\n"+total);
    }
}
