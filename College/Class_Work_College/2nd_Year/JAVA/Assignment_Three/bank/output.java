package bank;
import java.util.*;
public class output extends input
{
    public static void main(String[] args) 
    {
        System.out.println("Welcome To Our Bank\n\n");
        input i = i.details();
        System.out.println("\n..................\n");
        while(true)
        {
            char c;
            Scanner one = new Scanner(System.in);
            System.out.println("What Do You Want To do ??\nD == Deposit\nW == Withdraw\nE == Exit\n");
            c = one.next().charAt(0);
            if (c=='D'||c=='d')
            {
                i.deposit();
            }
            else if (c == 'W'||c=='w')
            {
                i.withdraw();
            }
            else if (c == 'E'||c=='e')
            {
                System.out.println("Thank You For visited ");
                System.exit(0);
            }
        }
    }
}