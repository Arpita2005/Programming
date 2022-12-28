import java.util.Scanner;
class advance
{
    String name,branch_name;
    int no_of_person, ac_open_amount,deposit,withdraw,id,i=0;
    Scanner input = new Scanner(System.in);
    public void get_details()
    {
    System.out.println("How much number of person's details you want to entry ??");
    no_of_person=input.nextInt();
    System.out.println(".............................................................");
    for(int i=0;i<=no_of_person;i++)
    {
        System.out.println("Person: ");
        System.out.println("Your Name:");
        name=input.next();
        input.nextLine();
        System.out.println("Enter your Id:");
        id=input.nextInt();
        input.nextLine();
        System.out.println("Enter Your Branch Name:");
        branch_name=input.next();
    }
    }
}
class bank_advance
{
    public static void main(String[] args)
    {
        new advance().get_details();
    }

}