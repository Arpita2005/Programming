import java.util.*;
class Calculator
{
    public static int num1,num2,result;
    public static void input()
    {
        Scanner In=new Scanner(System.in);
        System.out.println("Enter the Two numbers");
        num1=In.nextInt();
        num2=In.nextInt();
    }
   
    public static void addition()
    {
        result=num1+num2;
      System.out.println("the result is "+result);  
    }
     public static void Substraction()
    {
        result=num1-num2;
      System.out.println("the result is "+result);  
    }
     public static void division()
    {
        result=num1/num2;
      System.out.println("the result is "+result);  
    }
     public  static void Multiplication()
    {
        result=num1*num2;
      System.out.println("the result is "+result);  
    }
 public static void Modulo()
    {
        result=num1%num2;
      System.out.println("the result is "+result);  
    }
   
}
public class sample
{
     
public static void main(String[] args)
{
    int choose;
    Scanner ETN=new Scanner(System.in);
    Calculator cp=new Calculator();
System.out.println("What do you want to calculate \n1.add\n2.sub\n3.div\n4.Mul\n5.mod");
choose=ETN.nextInt();
if (choose==1)
{
  Calculator.addition();
}

else if (choose==2)
{
 Calculator.Substraction();
}
else if (choose==3)
{
  Calculator.division();
}
else if (choose==4)
{
 Calculator.Multiplication();
}
else if (choose==5)
{
  Calculator.Modulo();
}
}
}
