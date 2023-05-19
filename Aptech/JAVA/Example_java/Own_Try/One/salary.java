package One;
import java.util.*;
public class salary
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
