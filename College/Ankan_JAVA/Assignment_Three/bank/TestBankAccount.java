package bank;

import java.util.*;

public class TestBankAccount
{
    public static void main(String[] args) 
    {
    	BankAccount myacc = new BankAccount("Ankan Kumar Daw","SBI10001","S",30000);
    	
        System.out.println("Welcome To Our Bank\n\n");
       // BankAccount.details();
        System.out.println("\n..................\n");
        while(true)
        {
            char c;
            Scanner one = new Scanner(System.in);
            System.out.println("What Do You Want To do ??\nD == Deposit\nW == Withdraw\n S == Show Balance\nE == Exit\n");
            c = one.next().charAt(0);
            if (c=='D'||c=='d')
            {
                myacc.deposit();
            }
            else if (c == 'W'||c=='w')
            {
                myacc.withdraw();
            }
            else if (c == 'S'||c=='s')
            {
            	myacc.displaydetails();
            }
            else if (c =='E' || c=='e') {

                System.out.println("Thank You For visited ");
                System.exit(0);
            }
        }
    }
}
