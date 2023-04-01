package Library;
import java.util.*;
public class searchbook_bookname extends Add_Book
{
     void search_bookname()
    {
        String searchname;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter The Book Name To show The details ");
        searchname=sc.nextLine();
        for(int i=0;i<num;i++)
        {
            if(searchname.equalsIgnoreCase(bookname))
            {

            }
        }
    }
}
