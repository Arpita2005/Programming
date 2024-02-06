// 1.	Design a class to represent a bank account. Include the following members-
// Data Members –
// 	Name of the depositor
// 	Account number
// 	Type of account
// 	Balance amount in the account
// Methods –
// 	To assign initial values
// 	To deposit an amount
// 	To withdraw an amount after checking balance
// 	To display the name and balance


// Note: Use constructor to provide the initial values to the data members. And instantiate the class in a driver class (having main) and show the usage of its methods.

import java.util.Scanner;

class details
{
     String name,branch;
     Scanner sc =  new Scanner(System.in);
     Scanner sc1= new Scanner(System.in);
     int acc_num,balance,id,deposit,withdraw;
     details(String name,String branch,int acc_num, int balance,int id,int deposit,int withdraw)
     {
        this.name=name;
        this.branch=branch;
        this.acc_num=acc_num;
        this.balance=balance;
        this.id=id;
        this.deposit=deposit;
        this.withdraw=withdraw;

     }
     public void input()
     {
        System.out.println("Enter your name :\n");
        name=sc.nextLine();
        System.out.println("Enter your ID :\n");
        id=sc1.nextInt();
        System.out.println("Enter your branch name:\n");
        branch=sc.nextLine();
        System.out.println("Enter your Opening amount :\n");
        balance=sc1.nextInt();
        details dp = new details(name, branch, acc_num, balance, id, deposit, withdraw);
    }
    public void deposit()
    {
        System.out.println("Enter the deposit amount :\n");
        deposit=sc1.nextInt();
        System.out.println("The total amount is :\n");
        balance+=deposit;
        deposit=balance;
        System.out.println(deposit);
    }
    public void withdraw()
    {
        System.out.println("Enter the withdraw amount :\n");
        withdraw=sc1.nextInt();
        System.out.println("The total amount is :\n");
        balance-=withdraw;
        withdraw=balance;
        System.out.println(withdraw);
    }

}

public class bankacc 
{
    
}