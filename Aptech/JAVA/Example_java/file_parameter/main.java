package file_parameter;
import java.util.*;
public class main 
{
   
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        Scanner sc1=new Scanner(System.in);
        String name,add;
        int roll;
        System.out.println("Enter your name :\n");
        name=sc.nextLine();
        System.out.println("Enter your roll :\n");
        roll=sc1.nextInt();
        System.out.println("Enter your address :\n");
        add=sc.nextLine();
        System.out.println("Your Details :");
        System.out.println("=============================");
        name nm=new name();
        nm.name(name, roll, add);
    }    
}
