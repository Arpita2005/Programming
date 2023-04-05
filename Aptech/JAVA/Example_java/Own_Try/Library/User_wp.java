package Library;
import java.util.*;
public class User_wp
{
    static void work(int num)
    {
        String name;
        int c;
        Scanner s=new Scanner(System.in);
        Scanner sc=new Scanner(System.in);
        System.out.println("Hi!! Welcome to our Library\nMay I know What is Your Name :\n");
        name=sc.nextLine();
        System.out.println("What do you want to do\n1. Show Database\n2. Search Book With Book Name\n3. Search Book With Author Name\n4. Want To Borrow[Can borrow only single item/single quantity at a time]\n5. Exit\n");
        c=s.nextInt();
        if(c==1)
        {
            System.out.println("Showing Book Base\n");
            System.out.println("++++++++++++++++++++++++++\n");
            Show_db.show(num);
        }
        else if (c==2)
        {
            System.out.println("Search Book Name By Book Name\n");
            searchbook_bookname.search_bookname();
        }
        else if (c==3)
        {
            System.out.println("Search Book Name By Author Name");
            searchbook_author.book_author();
        }
        else if (c==4)
        {
            System.out.println("Steps To Follow To Borrow A Book /---\n");
                Borrow.borrowbook();
        }
        else if (c==5)
        {
            System.exit(0);
        }

    }
}
