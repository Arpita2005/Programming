package Library;
import java.util.*;
public class searchbook_author extends Add_Book
{
    static void book_author()
    {
        String searchauthor,searchid;
        Scanner sc1=new Scanner(System.in);
        System.out.println("Enter the Author Name to search the Deatils :\n");
        searchauthor=sc1.nextLine();
        System.out.println("Enter the Book Id to get Details :\n");
        searchid=sc1.nextLine();
        for(int i=0;i<num;i++)
        {
            if(ip[i].authorname.equalsIgnoreCase(searchauthor))
            {
                if(ip[i].bookid.equalsIgnoreCase(searchid))
                {


                    System.out.println("The Book Name :\n" + ip[i].bookname);
                    System.out.println("The Author Name :\n" + ip[i].authorname);
                    System.out.println("The Publisher Name :\n" + ip[i].publishername);
                    System.out.println("The page Number :\n" + ip[i].pageno);
                    System.out.println("The Price :\n" + ip[i].price);
                    System.out.println("The Book Id is:\n" + ip[i].bookid);
                    System.out.println("The Availability :\n" + ip[i].availability);
                }
                else
                {
                    System.out.println("Does not Match Book Id\n");
                }
            }
            else
            {
                System.out.println("Does not Match \n");
            }
        }
    }
}
