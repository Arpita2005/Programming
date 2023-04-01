package Library;
import java.util.Scanner;

public class selection
{
    static void ownership()
    {
        char n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Welcome To Our Library\n\nGive Your Identity Please\n1. Librarian [Enter A]       2. User [Enter B]\n ");
        n=sc.next().charAt(0);
        if(n=='A'||n=='a')
        {
            password.password();
            librarian_work.select(Add_Book.num);
        }
        else if (n=='B'||n=='b')
        {
            User_wp.work();
        }
        else
        {
            System.out.println("Choose the correct option\n");
        }
    }
}
