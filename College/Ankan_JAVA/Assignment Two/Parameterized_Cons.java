import java.util.*;
public class Parameterized_Cons 
{
    int roll;
    String name;
   Parameterized_Cons(int a, String b)
   {
      this.roll=a;
      this.name=b;
   }
   public static void main(String[] args) 
   {
       int r;
       String n;
       Scanner sc= new Scanner(System.in);
       Scanner sc1= new Scanner(System.in);
       System.out.println("Enter your Roll :\n");
       r=sc.nextInt();
       System.out.println("Enter your Name :\n");
       n=sc1.nextLine();
       Parameterized_Cons pc=new Parameterized_Cons(r,n);
       System.out.println("Your Roll is :\n"+pc.roll);
       System.out.println("Yout name is :\n"+pc.name);
       
   }
}
