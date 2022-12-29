//import java.io.*;
import java.util.Scanner;
//main class
 public class call_by_reference
 {
      int num1,num2;
    public void user_input()   
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of a:");
        num1=input.nextInt();
        System.out.println("Enter the number of b:");
        num2=input.nextInt();
        input.close();

    }
        public  void display()  
        {   
            System.out.println("Before swappping the numbers are:"+num1+"  "+num2);
        }

        public void swap(int num1,int num2)
        {
            
            int temp;
            temp=this.num1;
            this.num1=this.num2;
            this.num2=temp;
        }

        public void displayswap()
        {
            //this.swap(num1, num2);
            System.out.println("After swappping the numbers are:"+num1+"  "+num2);
        }
    }
    class result
    { 
    public static void main(String[] args)
    {
        call_by_reference c1 = new call_by_reference();
        c1.user_input();
        c1.display();
        c1.swap(c1.num1,c1.num2);
        c1.displayswap();


    }
}


    

