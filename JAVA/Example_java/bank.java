
//import java.io.*;
import java.util.Scanner;

class bank
{  int deposit;
    Scanner input = new Scanner(System.in);
        public void account_open()
        {
            
            // Scanner input = new Scanner(System.in);
            System.out.println("Hello Customer! ");
            System.out.println("Enter how much amount you want to deposit in your account to open new account:");
            deposit=input.nextInt();
            System.out.println("Your present amount of your bank is:"+deposit);
            //input.close();
        }

        public void deposit_add()
        {
            int add,result;
            // Scanner input = new Scanner(System.in);
            System.out.println("Enter how much amount you want to do down payment:");
            add=input.nextInt();
            result=add+deposit;
            System.out.println("Your present back account balace is:"+result);
            //input.close();

        } 
        public void withdraw()
        {
            int withdraw,total;
            // Scanner input = new Scanner(System.in);
            System.out.println("Enter how much amount you want to withdraw:");
            withdraw=input.nextInt();
            total=deposit-withdraw;
            System.out.println("Your present back account balace is:"+total);
            //input.close();

        }
         public void option_choose()
         {
            String decide;
            // Scanner sc = new Scanner(System.in);
            System.out.println("Select the option that you want to do");
            System.out.println("Deposit == D   Withdraw == W");
            decide=input.next();
            if(decide.toUpperCase().equals("D"))
            {
                this.deposit_add();
               
            }
            else if(decide.toUpperCase().equals("W"))
            {
                this.withdraw();
            }
            else
            {
                System.out.println(" You have entered wrong option");
            }
        }

}
        
class effect
{
public static void main(String[] args)
{
    bank b1=new bank();
    b1.account_open();
    b1.option_choose();

}
}