package Employees;
import java.util.*;
public class employees 
{
    static int emp=0;
    // static Employees_data[] ED;
    static Scanner Ic = new Scanner(System.in);
    static void emp_data_input() throws Exception
    {
        System.out.println("How many employees are there?");
        emp=Ic.nextInt();
        Emp_loop_input.loop_input(emp);
    }
}