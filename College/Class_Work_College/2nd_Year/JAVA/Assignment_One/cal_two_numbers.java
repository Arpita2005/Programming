// 1. Write a class in Java to represent a calculator with the following features.
//   a. There should be three data members two for the operands and one for the result
//   b. There  should be the following methods  i. Add method ii. Subtraction method  iii. Multiply method iv.Division method v. Modulo method    	vi. Show result 
  

// The class should contain default constructer and parametered constructur.The main method shuold create a obj of this calculator class and do the operation as described in the class

import java.util.*;
class variables
{
    private int num1=0,num2,result;
    public void getnum1()
    {
        this.num1=num1;
        Scanner sc = new Scanner(System.in);
        num1=sc.nextInt();  
    }
    public int show_num1()
    {
        return this.num1;
    }
    public void getnum2()
    {
        this.num2=num2;
        Scanner sc = new Scanner(System.in);
        num2=sc.nextInt();
    }
    public int show_num2()
    {
        return this.num2;
    }
    public void add()
    {
        result=num1+num2;
        System.out.println("The Addition is : "+result);
    }
     public void sub()
    {
        result=num1-num2;
        System.out.println("The Subtraction is : "+result);
    }
      public void mul()
    {
        result=num1*num2;
        System.out.println("The Multiplication is : "+result);
    }
       public void div()
    {
        result=num1/num2;
        System.out.println("The Division is : "+result);
    } 
       public void mod()
    {
         result=num1%num2;
         System.out.println("The Modulo is : "+result);
    }
 
}

class input extends variables
{
    public void input()
    {
        Scanner Sc1= new Scanner(System.in);
        System.out.println("Enter the first number :\n");
        getnum1();
        System.out.println("Enter the second number :\n");
        getnum2();  
    }
    public void addition()
            
    {
        input();
        add();    
    }
    public void Subtraction()
            
    {
       input();
        sub();    
    }
    public void multiplication()
            
    {
       input();
        mul(); 
    }
    public void division()
            
    {
        input();
        div();
        
    }
    public void modulo()
            
    { 
        input();
        mod();
        
    }
}
public class cal_two_numbers
{
    public static void main(String[] args) 
    {
       while(true)
       {
         int ch;
          Scanner sc1 = new Scanner(System.in);
          input ip = new input();
           System.out.println("What do you want to do ?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n6. Exit\n");
           ch=sc1.nextInt();
           if(ch==1)
           {
                ip.addition();
           }
           else if(ch==2)
           {
            ip.Subtraction();
           }
           else if(ch==3)
           {
            ip.multiplication();
           }
           else if(ch==4)
           {
            ip.division();
           }
           else if(ch==5)
           {
            ip.modulo();
           }
           else if(ch==6)
           {
            System.out.println("Thank You \n");
            System.exit(0);
           }
           else
           {
            System.out.println("Choose the correct Option \n");
           }
       }
    }
}
