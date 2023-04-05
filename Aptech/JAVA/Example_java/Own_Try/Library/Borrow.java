package Library;
import java.util.*;
public class Borrow extends Add_Book
{
    static void borrowbook()
    {
        String sb,sa,sid;
        Scanner one = new Scanner(System.in);
        System.out.println("Enter The Book details To borrow a Book :\n");
        System.out.println("Book Name ??\n");
        sb=one.nextLine();
        System.out.println("Author Name ??\n");
        sa=one.nextLine();
        System.out.println("Book Id ??\n");
        sid=one.nextLine();
        for(int i=0;i<num;i++)
        {
            if (ip[i].bookname.equalsIgnoreCase(sb) && (ip[i].authorname.equalsIgnoreCase(sa)) && (ip[i].bookid.equalsIgnoreCase(sid)))
            {
                System.out.println("The Book Name :\n" + ip[i].bookname);
                System.out.println("The Author Name :\n" + ip[i].authorname);
                System.out.println("The Publisher Name :\n" + ip[i].publishername);
                System.out.println("The page Number :\n" + ip[i].pageno);
                System.out.println("The Price :\n" + ip[i].price);
                System.out.println("The Book Id is:\n" + ip[i].bookid);
                date d=new date();
                d.date();
                System.out.println("\n\n You Have Successfully Borrowed !!!!\n");
                System.out.println("After Borrowing the number of availability is :"+(ip[i].availability-1)+" of "+ip[i].bookname);
            }
            else
            {
                System.out.println("Does not match with the given input \n");
            }
        }
    }

}
