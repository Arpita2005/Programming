import java.util.Scanner;
class person
{
    Scanner sc=new Scanner(System.in);
    Scanner input=new Scanner(System.in);
    int id,ac_open_amount,deposit,withdraw,num;
    String name,verify,branch;
    char choose;
}

class details
{
    Scanner sc=new Scanner(System.in);
    Scanner input=new Scanner(System.in);
    int id,ac_open_amount,deposit,withdraw,num,verify;
    String name,branch;
    char choose;
    
    public void details(int person)
    {
        System.out.println("Enter how much person's details you want to entry:\n");
        num=sc.nextInt();
        person[] p1=new person[num];
        for(int i=0;i<p1.length;i++)
        {
            System.out.println(" ||Details : "+(i+1) +"||");
            System.out.println("Enter Your Name:\n");
            name=input.nextLine();
            System.out.println("Enter Your Id:\n");
            id=sc.nextInt();
            System.out.println("Enter your branch name:\n");
            branch=input.nextLine();
            System.out.println("How much amount you want to give to creat a new account:\n");
            ac_open_amount=sc.nextInt();
        }
        System.out.println("What do you want to do??\n");
        System.out.println("\nD = Deposit \nW = Withdraw \nE = Exit");
        choose=sc.next().charAt(0);
        if(choose=='D'||choose=='d')
        {
            System.out.println("Which user's details you want to show type his/her name or ID:");
            verify=input.nextInt();

            for(int i=0;i<p1.length;i++)
            {
                if(p1.length==verify)
                {
                    System.out.println("Enter how much amount you want to deposit");
                    deposit=input.nextInt();
                    System.out.println("You have deposited "+deposit+"amount");
                    ac_open_amount+=deposit;
                    System.out.println("Your present bank balance is : "+ac_open_amount);
                }
            }
        }
    }
}
class bank
{
   public static void main(String args[])
   {
     int person=5;    
    details d1=new details();
        d1.details(person);
   }
}

