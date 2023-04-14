package Library;
import java.io.IOException;
import java.util.Scanner;

public class selection
{
    static void ownership() throws IOException
    {
        char n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Welcome To Our Library\n\nGive Your Identity Please\n1. Librarian [Enter A]       2. User [Enter B]         3.Exit[Enter E}\n ");
        n=sc.next().charAt(0);
        if(n=='A'||n=='a')
        {
            password.password();
            librarian_work.select(Add_Book.num);
        }
        else if (n=='B'||n=='b')
        {
            User_wp.work(Add_Book.num);
        }
        else if(n=='e'||n=='E')
        {
            System.exit(0);
        }
        else
        {
            System.out.println("Choose the correct option\n");
        }
    }
}
