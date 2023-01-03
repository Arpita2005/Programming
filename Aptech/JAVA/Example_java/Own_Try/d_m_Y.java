import java.io.*;
import java.util.Scanner;
public class d_m_Y 
{
    public static void main(String args[])
    {
       Scanner input=new Scanner(System.in);
       int day,rem,year,l_day;
       System.out.println("Enter the dat to see year month and day:\n");
       day=input.nextInt();
       year=day/365;
       System.out.println("The year is:\n"+year);
       rem=day%365;
       System.out.println("The month is:\n"+rem);
       l_day=rem/12;
       System.out.println("The day is:\n"+l_day);
    }

}
