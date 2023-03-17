package Employees;
import java.util.*;
public class Emp_loop_input {
    static Employees_data[] ED;
    
    static String Data="(NAME)     ||    (DATE OF BIRTH)   ||   (GROSS SALARY)     ||    {AND SOME OTHER DETAILS}\n\n";
    static Scanner Ic = new Scanner(System.in); //for Int input
    static Scanner Sc = new Scanner(System.in); //for String input
    static void loop_input(int emp) throws Exception
    {
        ED=new Employees_data[emp];
        for(int i=0;i<emp;i++)
        {
            ED[i]=new Employees_data();
            System.out.println("Enter your name");
            ED[i].name=Sc.nextLine();
            System.out.println("Enter your Date of Birth (DD/MM/YYYY)");
            ED[i].DOB=Sc.nextLine();
            System.out.println("Enter your basic salary");
            ED[i].basic_salary=Ic.nextInt();
            System.out.println("calculating your gross salary when (DA=15% || HRA=24%)");
            ED[i].HRA=(0.24*ED[i].basic_salary);
            ED[i].DA=(0.15*ED[i].basic_salary);
            ED[i].gross_salary=(ED[i].basic_salary+ED[i].HRA+ED[i].DA);
            ED[i].Data+=ED[i].name+"  ||  "+ED[i].DOB+"  ||   "+ED[i].gross_salary+" || ( DA = "+ED[i].DA+" || HRA = "+ED[i].HRA+" )\n";
            Data+=ED[i].Data;
        }
        File_input.file_input(Data);
    }
}