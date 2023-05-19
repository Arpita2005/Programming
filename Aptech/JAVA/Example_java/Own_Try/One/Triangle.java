package One;

import java.util.Scanner;

public class Triangle
{
    public static void tri()
    {
        float range1;
        double area,perimeter,s;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of three side of a triangle ");
        range1=sc.nextFloat();
        s=range1*range1;
        area= 1.732/4*s;
        perimeter=3*range1;
        System.out.println("Your area of triangle is "+area+"perimeter is :"+perimeter);
        if(area==perimeter)
        {
            System.out.println("It is a equable triangle \n");
        }
        else
        {
            System.out.println("It is not a equable triangle \n");
        }

    }
}
