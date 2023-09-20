package Assignment;
import java.util.*;
class one 
{
    String name,id;
    double basic_salary,HRA,DA,total_salary;
    Scanner sc= new Scanner(System.in);
    public void getData()
    {
        System.out.println("Enter Your Name :\n");
        name=sc.nextLine();
        System.out.println("Enter Your Id :\n");
        id=sc.nextLine();
        System.out.println("Enter The Basic Salary :\n");
        basic_salary=sc.nextDouble();
        HRA=basic_salary*0.2;
        DA=basic_salary*0.5;
    }
    public void setData()
    {
        System.out.println("Your name is :\n"+name);
        System.out.println("Your Id is :\n"+id);
        System.out.println("Your Basic salary is :\n"+basic_salary);
        total_salary=HRA+DA+basic_salary;
        System.out.println("After calculating HRA and DA the salary is :"+total_salary);
    }
}
public class TestEmployee extends one
{
    public static void main(String args[])
    {
        int n;
        one o = new one();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many person's details you want to entry \n");
        n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            o.getData();
            o.setData();
            System.out.println("\n=========================\n");
        }
    }
}
