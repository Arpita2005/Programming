import java.util.*;
class Banking_statement
{
    //declaring variables
    int balance,deposit,withdraw;
    public String C_name;
    public String B_name;
    //declaring scanner input for balance amount
     Scanner amount_input=new Scanner(System.in);
    //input scanner for customer name and branch name
    Scanner name_input=new Scanner(System.in);

    //Bank open
     void bank_open()
    {
        System.out.println("Hello customer what's your name?");
        C_name=name_input.nextLine();
        System.out.println("Customer name : "+C_name);
        System.out.println("Hello customer what's your Branch name?");
        B_name = name_input.nextLine();
        System.out.println("Customer branch name : "+B_name);
        System.out.println("Enter how much amount do you want to deposit to open account?");
        balance=amount_input.nextInt();
//        System.out.println("Amount deposited : "+balance);
        System.out.println("=================================");
        System.out.println("Your name : "+C_name+"\nYour Branch name : "+B_name+"\nYour balance : "+balance);
    }
    void  bank_deposit()
    {
        System.out.println("=================================");
        System.out.println("Enter a amount to deposit : ");
        deposit=amount_input.nextInt();
        balance+=deposit;
        //        System.out.println("You deposited Rs. "+deposit);
        System.out.println("=================================");
        System.out.println("Your name : "+C_name+"\nYour Branch name : "+B_name+"\nYou deposited Rs. "+deposit+"\nYour balance : "+balance);
    }
    void bank_withdraw()
    {
        System.out.println("=================================");
        System.out.println("Enter amount to withdraw :");
        withdraw=amount_input.nextInt();
        balance-=withdraw;
        System.out.println("You withdraw Rs. "+withdraw);
        System.out.println("=================================");
        System.out.println("Your name : "+C_name+"\nYour Branch name : "+B_name+"\nYou withdraw Rs. "+withdraw+"\nYour balance : "+balance);
    }
    void choose()
    {
        char choose;
        Scanner sc=new Scanner(System.in);
        bank_open();
        while(true)
        {
            System.out.println("\nChoose what you want to do?\nMr. /Ms. "+C_name);
            System.out.println("D == Deposit || W == Withdraw || E == Exit");
            choose=sc.next().charAt(0);
            if (choose=='D' || choose=='d')
            {
                bank_deposit();
            }
            else if (choose=='W' || choose=='w')
            {
                bank_withdraw();
            } else if (choose=='E' || choose=='e')
            {
                System.out.println("=================================");
                System.out.println("Your name : "+C_name+"\nYour Branch name : "+B_name+"\nYour balance : "+balance);
                System.out.println("Your Bank statement details has been closed !");
                System.exit(0);
            }
            else
            {
                System.out.println("You have entered something else '"+choose+"'");
                System.out.println("=================================");
                System.out.println("Your name : "+C_name+"\nYour Branch name : "+B_name+"\nYour balance : "+balance);
            }
        }

    }

}
public class Banking {
    public static void main(String[] args) {
        // Banking_statement BS=new Banking_statement();
        // BS.choose();
        new Banking_statement().choose();
    }
}
