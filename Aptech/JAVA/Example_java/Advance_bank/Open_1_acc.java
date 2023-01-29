package Advance_bank;
import java.util.*;
public class Open_1_acc
{
    String name,address;
    Scanner sc=new Scanner(System.in);
    Scanner sc1=new Scanner(System.in);
    int age;
    Scanner one=new Scanner(System.in);
    double id,phone_num;
    Scanner input=new Scanner(System.in);
    public void open_single_account()
    {
        System.out.println("Open Single Account\n");
        System.out.println("===================\n");
        System.out.println("Enter Your Name:\n");
        name=sc.next();
        System.out.println("Enter Your Age:\n");
        age=one.nextInt();
        System.out.println("Enter Your Id:\n");
        id=input.nextDouble();
        System.out.println("Enter Your Address:\n");
        address=sc1.next();
    }
}
