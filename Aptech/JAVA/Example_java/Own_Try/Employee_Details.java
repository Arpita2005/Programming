import java.io.*;
import java.util.*;
public class Employee_Details 
{
    public static void main(String[] args+
    +) throws IOException
    {
        DetailsFirst d1=new DetailsFirst();
       d1.data_input();
    }
}
class DetailsFirst
{
    String[] name,doj;
    double[] basic_salary;
    int num;
    static Scanner sc=new Scanner(System.in);
    static Scanner sc1=new Scanner(System.in);
    static Scanner sc2=new Scanner(System.in);

    int data_input() throws IOException
    {
        FileWriter wf=new FileWriter("Employee_Details.txt");
        System.out.println("Enter how many person's details you want to entry :-\n");
        num=sc.nextInt();
        String Data="";
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
            Data+=name[i]+" || "+doj[i]+" || "+basic_salary[i]+"\n";
        }
        wf.write(Data);
        wf.close();
        return num;

    } 
    // public void search(int num) throws IOException
    // {
    //     DetailsFirst emp=new DetailsFirst();
    //    emp.data_input();
    //     String s_name;
    //     System.out.println("Enter Candidate's name to search and see the details :-\n");
    //     s_name=sc1.nextLine();
    //     for(int i=0;i<name.length;i++)
    //     {
    //         if(name[i].equalsIgnoreCase(s_name))
    //         {
    //             System.out.println("Employee name : "+name[i]);
    //             System.out.println("Employee Day of joining : "+doj[i]);
    //             System.out.println("Employee basic salary : "+basic_salary);
    //         }
    //     }
    // }
    
}
