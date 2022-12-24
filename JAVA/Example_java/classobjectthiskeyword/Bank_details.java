import java.util.Scanner;
class first
{
    String name;
    char select;
    int ac_open_amount,deposit,withdraw;
    Scanner input = new Scanner(System.in);

    public void name()
    {
    System.out.println("Hello Customer! ");
    System.out.println("Enter your name:\n");
    name=input.nextLine();
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
        System.out.println("Enter how much amount you want to deposit  "+name);
        deposit=input.nextInt();
        ac_open_amount+=deposit;
        System.out.println("Your present bank balance is : "+ac_open_amount);
    }
    public void withdraw()
    {
        System.out.println("Enter how much amount you want to withdraw   "+name);
        withdraw=input.nextInt();
        ac_open_amount-=withdraw;
        System.out.println("Your present bank balance is : "+ac_open_amount);
    }
    public void option_selection()
    {
        
        name();
        account_open();
        Scanner input=new Scanner(System.in);
        while(true) 
        {
        //System.out.println("Hello  "+name);
        System.out.println("\nWhat do you want to do   "+name+"??");
        System.out.println("\nD = Deposit \nW = Withdraw \nE = Exit");
        select=input.next().charAt(0);

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
             System.out.println("  "+name+" Your bank statement has been closed");
             System.exit(0);
        }
       else
       {
        System.out.println("You have choose wrong option\n");
       }
    }
}
}
class bank_details
{
   // static Scanner input = new Scanner(System.in); 
    public static void main(String[] args)
    {
    // first f1=new first();
    // f1.name();
    // f1.account_open();
    // f1.option_selection();
    new first().option_selection();
    }
    
}