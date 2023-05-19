import java.util.*;
class valueofz
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
class tri
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
class salary
{
    public static void sal()
    {
        float basic_salary;
        double da,hra,net_pay;
        Scanner sc1=new Scanner(System.in);
        System.out.println("Enter Your Basic Salary :\n");
        basic_salary=sc1.nextFloat();

        hra=(basic_salary*0.15);
        System.out.println("\nYour HRA is :"+hra);
        System.out.println("\n............................\n");

        da=(basic_salary*0.25);
        System.out.println("Your DA is :"+da);
        System.out.println("\n............................\n");

        net_pay=basic_salary+hra+da;
        System.out.println("Your Net Salary is :"+net_pay);
        System.out.println("\n............................\n");
    }
}
class distance
{
    public static void dis() 
    {
        float x1, y1, x2, y2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Give the value of 1st point (x1,y1) ::\n");
        x1 = sc.nextFloat();
        y1 = sc.nextFloat();
        System.out.println("Give the value of 2nd point (x2,y2) ::\n");
        x2 = sc.nextFloat();
        y2 = sc.nextFloat();

        float sub1 = x2 - x1;
        float sub2 = y2 - y1;
        float root = (sub1 * sub1) + (sub2 * sub2);
        double ans = Math.sqrt(root);
        System.out.println("\n............................\n");
        System.out.println("The Distance is :\n" + ans);

    }
}
public class All_prg
{
    public static void main(String[] args)
    {
        while (true) {
            int c;
            Scanner sc = new Scanner(System.in);
            System.out.println("\nWhich File You Want to Run ??\n1. Distance Between Two Points\n2. Salary \n3. Equative Triangle\n4. Value Of Z\n5. Exit");
            c = sc.nextInt();
            if (c == 1) {
               distance.dis();
            } else if (c == 2) {
               salary.sal();
            } else if (c == 3) {
                tri.tri();
            } else if (c == 4) {
               valueofz.input();
            } else if (c == 5) {
                System.exit(0);
            } else {
                System.out.println("Choose the correct option\n");
            }
        }
    }
}