package Example_java.calculator;
import java.util.Scanner;
class option
{
Scanner sc=new Scanner (System.in);
int  num1,num2;
public void addition()
{
    System.out.println("Addition\n");
    System.out.println("Enter your First Number:\n");
    num1=sc.nextInt();
    System.out.println("Enter your Second Number:\n");
    num2=sc.nextInt();
    System.out.println("The Result of the addition is:\n"+(num1+num2));
}
public void subtraction()
{
    System.out.println("Subtraction\n");
    System.out.println("Enter your First Number:\n");
    num1=sc.nextInt();
    System.out.println("Enter your Second Number:\n");
    num2=sc.nextInt();
    System.out.println("The Result of the subtraction is:\n"+(num1-num2));
}
public void multiplication()
{
    System.out.println("Multiplication\n");
    System.out.println("Enter your First Number:\n");
    num1=sc.nextInt();
    System.out.println("Enter your Second Number:\n");
    num2=sc.nextInt();
    System.out.println("The Result of the multiplication is:\n"+(num1*num2));
}
public void division()
{
    System.out.println("Division\n");
    System.out.println("Enter your First Number:\n");
    num1=sc.nextInt();
    System.out.println("Enter your First Number:\n");
    num2=sc.nextInt();
    System.out.println("The Result of the division is:\n"+(num1/num2));
}
public void remainder()
{
    System.out.println("Remainder\n");
    System.out.println("Enter your First Number:\n");
    num1=sc.nextInt();
    System.out.println("Enter your First Number:\n");
    num2=sc.nextInt();
    System.out.println("The Result of the remainder is:\n"+(num1%num2));
}
}
public class first extends option
{
    int decide,select;
    Scanner fn=new Scanner(System.in);
    public void option_choose()
       {
         System.out.println("What you want to do\n1:Addition\n2:Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
         decide=fn.nextInt();
         if(decide==1)
         {
            addition();
         }
         else if(decide==2)
         {
            subtraction();
         }
         else if(decide==3)
         {
            multiplication();
         }
         else if(decide==4)
         {
            division();
         }
         else if(decide==5)
         {
            remainder();
         }
         else
         {
            System.out.println("You have choose wrong option ! Sorry\n");
         }

         System.out.println("Do you want to continue:\nPress 1 for YES\n Press 0 for NO\n");
         select=fn.nextInt();
         if(select==1)
         {
            option_choose();
         }
          else if(select==0)
          {
            System.exit(0);
          }

       }
}