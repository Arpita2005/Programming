package Library;

import java.util.Scanner;

public class librarian_work
{
    static void select(int num)
    {
        int s;
        Scanner o=new Scanner(System.in);
        System.out.println("What do you want to do\n1. Add Book Details\n2. Show Book In listed Form\n3. Search Book With Availability\n4. Exit");
        s=o.nextInt();
        if(s==1)
        {
            System.out.println("|| Add Books ||\n");
            Add_Book.add();

        }
        else if (s==2)
        {
            System.out.println("|| View Data In Listed Form ||\n");
            Show_db.show(num);
        }
        else if (s==3)
        {
            System.out.println("|||+++ Showing Books In Listed Form +++|||\n");
            Search_avail.avail(num);
        }
        else if (s==4)
        {
            System.exit(0);
        }
        else
        {
            System.out.println("Choose The Correct Option Please\n");
        }
    }
}
