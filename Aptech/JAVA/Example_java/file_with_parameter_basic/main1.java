package file_with_parameter_basic;
import java.util.Scanner;

public class main1
{
   
public static void main(String[] args) 
{
    
    String name,address;
    int Roll;
    Scanner sc=new Scanner(System.in);
    Scanner sc1=new Scanner(System.in);
    System.out.println("Enter Your Name:\n");
    name=sc1.nextLine();
    System.out.println("Enter your Roll No:");
    Roll=sc.nextInt();
    System.out.println("Enter Your Address:");
    address=sc1.nextLine();
    input i=new input();
    System.out.println("Your Details is:\n");
    System.out.println("================================\n");
    i.details(Roll,name);
    i.location(address);
}
}