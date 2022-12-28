import java.util.Scanner;
class advance
{
    String name,branch_name,select;
    char choose;
    int no_of_person, ac_open_amount,deposit,withdraw,id,i;
    Scanner input = new Scanner(System.in);
    Scanner sc=new Scanner(System.in);
    public void get_details()
    {
    System.out.println("How much number of person's details you want to entry ??");
    no_of_person=input.nextInt();
    System.out.println(".............................................................");
    for(int i=0;i<no_of_person;i++)
    {
        System.out.println("Person: "+(i+1));
        System.out.println("Your Name:");
        name=sc.nextLine();
        System.out.println("Enter your Id:");
        id=input.nextInt();
        System.out.println("Enter Your Branch Name:");
        branch_name=sc.nextLine();
        System.out.println("Enter how much amount you want to deposit to creat an account:\n");
        ac_open_amount=input.nextInt();
        System.out.println("Your Present Bank Balance is: \n"+ac_open_amount);
        System.out.println("===========================\n");
    }
    } 
    public void option_select()
    {
        System.out.println("\nWhat do you want to do ??");
        System.out.println("\nD = Deposit \nW = Withdraw \nE = Exit");
        choose=input.next().charAt(0);
        if(choose=='D'||choose=='d')
        {
            System.out.println("Enter how much amount you want to deposit:  ");
            deposit=input.nextInt();
            ac_open_amount+=deposit;
            System.out.println("Your present bank balance is : "+ac_open_amount);
        }
        else if(choose=='W'||choose=='w')
        {
            System.out.println("Enter how much amount you want to withdraw: ");
            withdraw=input.nextInt();
            ac_open_amount-=withdraw;
            System.out.println("Your present bank balance is : "+ac_open_amount);
        }
        else if(choose=='E'||choose=='e')
        {
            System.out.println(" Your bank statement has been closed");
            System.exit(0);
        }
        else
        {
            System.out.println("You have choose wrong option\n");
        }
    }
    // public void person_match()
    // {
    //     select=sc.nextLine();
    // }
}

class bank_advance
{
    public static void main(String[] args)
    {
        new advance().get_details();
    }

}