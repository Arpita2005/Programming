package Own_Try_employee;

import java.util.*;

import java.io.*;
public class Employee_Data_Input {
    static String[] name,doj;
    static String data="",searchname;
    static double[] basic_salary,gross_salary;
    static double hra,da;
    static int users,save_users=1;
    static Scanner sc_S=new Scanner(System.in);
    static Scanner sc_N=new Scanner(System.in);
    static void input_data() throws Exception
    {
        FileWriter fw=new FileWriter("Employees_details.txt");
        System.out.println("How many employees data you want to create?");
        users=sc_N.nextInt();
        String[] name=new String[users];
        String[] doj=new String[users];
        // String[] data=new String[users];
        double[] gross_salary=new double[users];
        double[] basic_salary=new double[users];
        for(int i=0;i<users;i++)
        {
            System.out.println("Enter your name : ");
            name[i]=sc_S.nextLine();
            System.out.println("Enter your Daye of Joining (dd/mm/yyyy): ");
            doj[i]=sc_S.nextLine();
            System.out.println("Enter your basic salary : ");
            basic_salary[i]=sc_N.nextDouble();
            System.out.println("Calculating salary when (DA=5% || HRA=4%)");
            hra=(0.40*basic_salary[i]);
            da=(0.50*basic_salary[i]);
            gross_salary[i]=(basic_salary[i]+hra+da);
            data=name[i]+" "+doj[i]+" "+gross_salary[i]+"\n\n";
            fw.write(data);
        }
        // fw.write(data);
        System.out.println("Enter your employee name : ");
        searchname=sc_S.nextLine();
        for(int i=0; i<name.length;i++)
        {
            if(name[i].equalsIgnoreCase(searchname))
            {
                System.out.println("Employee name : "+name[i]);
                System.out.println("Employee Day of joining : "+doj[i]);
                System.out.println("Employee basic salary : "+basic_salary[i]);
                break;
            }
        }
        fw.close();
    }
    public static void main(String[] args) throws Exception {
        input_data();
    }
}