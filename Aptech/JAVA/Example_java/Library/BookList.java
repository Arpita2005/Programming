package Library;
import java.util.*;
public class BookList extends Variables
{
    String j="Searching";
    public void list(int b_num)
    {
        System.out.println("|||+++ Showing Books In Listed Form +++|||\n");
        System.out.println("+++=============================+++\n");
        for (int k = 0; k < j.length(); k++)
        {
            try {
                Thread.sleep(900);
            }
            catch (Exception e) {
                System.out.println(e.getCause());
            }
            System.out.println(j.charAt(k));
        }
        Add_Book ob=new Add_Book();
        ob.show_details(b_num);
        System.out.println("\n++++===================++++\n");
    }
}