import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class bank3 
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number of people: ");

        int num = Integer.parseInt(bf.readLine());

        Person p[] = new Person[num];

        for (int i = 0; i < num; i++)
        {
            System.out.println("\nPerson "+ (i+1) +" details:\n");
            System.out.println("Enter name: ");
            String name = bf.readLine();
            
            System.out.println("Enter branch: ");
            String branch = bf.readLine();

            System.out.println("Enter id: ");
            long id = Long.parseLong(bf.readLine());

            System.out.println("Enter balance: ");
            long balance = Long.parseLong(bf.readLine());
            
            p[i] = new Person(name, id, balance, branch);
        }

        while (true)
        {
            System.out.println("\nChoices:\n1.Deposit\n2.Withdraw\n3.Exit\n");
            
            int choice = Integer.parseInt(bf.readLine());

            if (choice == 3) return;
            if (choice < 1 || choice > 3)
            {
                System.out.println("Wrong input. Please try again");
                continue;
            }

            System.out.println("Enter name: ");
            String name = bf.readLine();

            System.out.println("Enter ID: ");
            long id = Long.parseLong(bf.readLine());

            boolean personFound = false;

            for (Person person : p)
            {
                if (person.name.equalsIgnoreCase(name) && person.id == id)
                {
                    System.out.println("Enter amount: ");
                    long amount = Long.parseLong(bf.readLine());


                    if (choice == 1)
                    {
                        person.balance += amount;
                        System.out.println("Amount " + amount + " deposited!");
                    }
                    else if (choice == 2)
                    {
                        if (amount > person.balance)
                        {
                            System.out.println("Insufficient balance to deduct from!");
                        }
                        else
                        {
                            person.balance -= amount;
                            System.out.println("Amount " + amount + " withdrawn!");
                        }
                    }
                    
                    System.out.println("Your balance is " + person.balance +"!");

                    personFound = true;
                    break;
                }
            }

            if (!personFound)
                System.out.println("No one found with that name/ID combo. Please try again!");
        }
    }
}

class Person
{
    String name;
    long id, balance;
    String branch;

    Person (String name, long id, long balance, String branch)
    {
        this.name = name;
        this.id = id;
        this.balance = balance;
        this.branch = branch;
    }
}