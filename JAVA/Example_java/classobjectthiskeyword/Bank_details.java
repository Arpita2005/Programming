import java.util.Scanner;
class first
{
    String name,select;
    int ac_open_amount,deposit,withdraw;
    Scanner input = new Scanner(System.in);

    public void step_one()
    {
    System.out.println("Hello Customer! ");
    System.out.println("Enter your name:\n");
    name=input.next();
    System.out.printf("According to your input your name is: "+name);
    }
    public  void account_open()
    {
        System.out.println("\n===============================\n");
        System.out.println("Welcome to our bank :)\n Hi "+name);
        System.out.println("To creat a new account how much amount you want to give\n");
        ac_open_amount=input.nextInt();
        System.out.println("Your present bank balance is:\n"+ac_open_amount);
    }
    public void deposit()
    {
        System.out.println("Hello "+name);
        System.out.println("Enter how much amount you want to deposit\n");
        deposit+=ac_open_amount;
        System.out.println("Your present bank balance is"+deposit);
    }
    public void withdraw()
    {
        System.out.println("Hello "+name);
        System.out.println("Enter how much amount you want to withdraw\n");
        withdraw=ac_open_amount-withdraw;
        System.out.println("Your present bank balance is"+withdraw);
    }
    public void option_selection()
    {
        
        Scanner sc=new Scanner(System.in);
        while(true) 
        {
        System.out.println("Hello  "+name);
        name=input.next();
        System.out.println("\nWhat do you want to do ??");
        System.out.println("\nD = Deposit \nW = Withdraw \nE = Exit");
        select=sc.next().charAt(0);

        //select=input.next();
        if(select=='D'||select=='d')
        {
            deposit();
        }
        else if(select=='W'||select=='w')
        {
            withdraw();
        }
        else if(select=='E'||select=='e')
        {
             
        }
    }
}
}
class bank_details
{
    static Scanner input = new Scanner(System.in); 
    public static void main(String[] args)
    {
    first f1=new first();
    f1.step_one();
    f1.account_open();
    f1.option_selection();
    }
}