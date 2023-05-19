package One;

import java.util.*;
public class valueOfZ
{
    public static void input()
    {
        float a,b;
        double z;
        Scanner sc = new Scanner(System.in);
        System.out.println("Give Your First Value (a) : \n");
        a = sc.nextFloat();
        System.out.println("Give Your Second Value (b) : \n");
        b=sc.nextFloat();
        System.out.println("=================================\n");
        if(a>b)
        {
            z=(a*a+b*b)/2*a*b;
            System.out.println("Your Output is :"+z);
            System.out.println("\n............................\n");
        }
        else if (a<b)
        {
              float ab=4*a*b;
              double root=Math.sqrt(ab);
              double root1=Math.sqrt(2);
              z= root/root1;
              System.out.println("Your Output is :"+z);
            System.out.println("\n............................\n");
        }
        else if (a==b)
        {
            z=0.75*a+0.5*b;
            System.out.println("Your Output is :"+z);
            System.out.println("\n............................\n");
        }
        else
        {
            System.out.println("Sorry No Condition Matched !!\n");
        }
    }
}
