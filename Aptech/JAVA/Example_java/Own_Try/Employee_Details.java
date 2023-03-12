import java.io.*;
import java.util.*;
class Details
{
    String[] name,doj;
    double[] basic_salary;
    int num;
    Scanner sc=new Scanner(System.in);
    Scanner sc1=new Scanner(System.in);
    Scanner sc2=new Scanner(System.in);

    int data_input() throws IOException
    {
        FileWriter wf=new FileWriter("Employee_Details.txt");
        System.out.println("Enter how many person's details you want to entry :-\n");
        num=sc.nextInt();
        String[] name=new String[num];
        String[] doj=new String[num];
        double [] basic_salary=new double[num];
        for(int i=0;i<num;i++)

        {
            System.out.println("Enter Your Name :\n");
            name[i]=sc1.nextLine();
            System.out.println("Enter Your Date Of Joining :\n");
            doj[i]=sc1.nextLine();
            System.out.println("Enter Your Basic Salary :\n");
            basic_salary[i]=sc2.nextDouble();
        }
        return num;

    } 
    public void search(int num) throws IOException
    {
        Details emp=new Details();
        emp.data_input();
        String s_name;
        System.out.println("Enter Candidate's name to search and see the details :-\n");
        s_name=sc1.nextLine();
        for(int i=0;i<name.length;i++)
        {
            if(name[i].equalsIgnoreCase(s_name))
            {
                System.out.println("Employee name : "+name[i]);
                System.out.println("Employee Day of joining : "+doj[i]);
                System.out.println("Employee basic salary : "+basic_salary);
            }
        }
    }
    
}
public class Employee_Details 
{
    public static void main(String[] args) throws IOException
    {
       Details d1=new Details();
       d1.search(0);
    }
}
