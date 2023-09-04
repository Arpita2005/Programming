package bank;
import java.util.*;
 public class BankAccount
{
   private  String depositor_name; 
   private  String acc_number;
   private String acc_type;
   private double balance;
   
   public BankAccount() {
	   this.depositor_name=" ";
       this.acc_number=" ";
       this.acc_type=" ";
       this.balance=0.0;
   }
     public BankAccount(String name, String id, String type, int amount)
    {
    	  this.depositor_name=name;
          this.acc_number=id;
          this.acc_type=type;
          this.balance=amount;

    }
    public  void displaydetails()
    {
		/*
		 * Scanner sc= new Scanner(System.in); Scanner in= new Scanner(System.in);
		 * System.out.println("Enter Your Name :\n"); String n=sc.nextLine();
		 * System.out.println("Enter Your Id :\n"); int id=in.nextInt();
		 * System.out.println("Enter Your Branch name :\n"); String
		 * b_name=sc.nextLine(); System.out.println("Enter Your Opening Amount \n"); int
		 * amn=in.nextInt(); BankAccount ip = new BankAccount(n,b_name,id,0,0,amn);
		 */
    	System.out.println("Name "+this.depositor_name);
    	System.out.println("Balance : "+this.balance);
    }
    public  void deposit()
    {
        double deposit_amount;
        Scanner sc=new Scanner(System.in);
        System.out.println("Welcome "+this.depositor_name);
        System.out.println("Enter how much amount you want to deposit :");
        deposit_amount=sc.nextDouble();
        this.balance=this.balance+deposit_amount;
        System.out.println("The amount "+deposit_amount+" deposited successfully.");
    }
    public  void withdraw()
    {
        double withdraw_amount;
        Scanner sc=new Scanner(System.in);
        System.out.println("Welcome "+this.depositor_name);
        System.out.println("Enter how much amount you want to withdraw :");
        withdraw_amount=sc.nextDouble();
        if(withdraw_amount<=this.balance)
        {
        	this.balance= this.balance - withdraw_amount;
            System.out.println("The amount"+withdraw_amount+" withdrawn successfully.");
        }
        else
        {
            System.out.println("Insufficient Balance \n");
        }
    }
}