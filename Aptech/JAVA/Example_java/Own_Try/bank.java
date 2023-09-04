import java.util.*;

class Person
{
    String name, branch;
    long id, balance;
    
    Person(String name, long id, long balance, String branch)
    {
        this.name=name; 
        this.id=id;
        this.balance=balance;
        this.branch=branch;
    }
}

class Details
{
    Scanner sc=new Scanner(System.in);
    Scanner input=new Scanner(System.in);

    String name,branch,verify_name;
    long id,verify_id, balance, deposit, withdraw;
    int num;
    char choose;
    
    public void details_of_everyone()
    {
        System.out.println("Enter how much person's details you want to entry:\n");

        num=sc.nextInt();

        Person[] p1=new Person[num];

        for(int i=0;i<p1.length;i++)
        {
            System.out.println(" || Details : "+(i+1) +"||");

            System.out.println("Enter Your Name:\n");
            name=input.nextLine();

            System.out.println("Enter Your Id:\n");
            id=sc.nextLong();

            System.out.println("Enter your branch name:\n");
            branch=input.nextLine();

            System.out.println("How much amount you want to give to creat a new account:\n");
            balance=sc.nextLong();

            p1[i]=new Person(name,id,balance,branch);
        }

        while(true)
        {
            System.out.println("What do you want to do??\n");
            System.out.println("\nD = Deposit \nW = Withdraw \nE = Exit");
            choose=sc.next().charAt(0);
            if(choose=='D'||choose=='d')
            {
                System.out.println("Enter your name:\n");
                verify_name = input.nextLine();
                System.out.println("Enter your Id:\n");
                verify_id = input.nextLong();
                for(int i=0; i<num; i++)
                {
                    if((p1[i].name).equalsIgnoreCase(verify_name) && (p1[i].id==(verify_id)))
                    {
                        System.out.println("Enter how much amount you want to deposit");
                        deposit=input.nextLong();
                        System.out.println("You have deposited "+deposit+"amount");
                        p1[i].balance += deposit;
                        System.out.println("Your present bank balance is : " + p1[i].balance);
                    }
                }
            }
            else if(choose=='W'||choose=='w')
            {
                System.out.println("Enter your name:\n");
                verify_name = input.nextLine();
                System.out.println("Enter your Id:\n");
                verify_id = input.nextLong();
                for(int i=0;i<num;i++)
                {
                    if((p1[i].name).equalsIgnoreCase(verify_name)&&(p1[i].id==(verify_id)))
                    {
                        System.out.println("Enter how much amount you want to withdraw   "+name);
                        withdraw=input.nextLong();
                        System.out.println("You have withdrawed "+withdraw+"amount");
                        p1[i].balance = deposit;
                        System.out.println("Your present bank balance is : "+p1[i].balance);
                    }
                }
        }
    
              else if(choose=='E'||choose=='e')
        {
              System.out.println(" Your bank statement has been closed");
              System.exit(0);
        }
              else
        {
               System.out.println("You have seleceted wrong option\n");
        }
    }
    }

}


class bank
{
   public static void main(String args[])
   {   
        new Details().details_of_everyone();
   }
}


