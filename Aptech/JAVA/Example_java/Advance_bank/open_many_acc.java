package Advance_bank;
import java.util.*;
public class open_many_acc
{
    int num,i,age;
    double id,ph_no;
    Scanner input=new Scanner(System.in);
    Scanner db=new Scanner(System.in);
    String name,address;
    Scanner sc=new Scanner(System.in);
    Scanner sc1=new Scanner(System.in);
    public void many_acc()
  {
      System.out.println(".======Open Many Account======.\n");
      System.out.println("How many person's account you want to crete ?");
      num=sc.nextInt();
      for(i=0;i<num;i++)
      {
          System.out.println("Enter Your Name:\n");
          name=sc.next();
          System.out.println("Enter Your Age:\n");
          age=sc.nextInt();
          System.out.println("Enter Your Id:\n");
          id=input.nextDouble();
          System.out.println("Enter Your Address:\n");
          address=sc1.next();
          System.out.println("Enter Your Phone Number:\n");
          ph_no=db.nextDouble();
          System.out.println("\n+=======================+\n");
      }
  }
}
