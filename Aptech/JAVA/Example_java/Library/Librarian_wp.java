package Library;

import pack.A;

import java.util.List;
import java.util.Scanner;

public class Librarian_wp extends Variables
{
    public  void select()
    {
        Scanner I=new Scanner(System.in);
        int b_num= 0;
        int number;
        System.out.println("What do you want to do ???\n1. Add Book Details\n2. Show Books In Listed Form\n3. Availability\n4. Rules And Regulation\n5. Exit");
        number=I.nextInt();
        if(number==1)
        {
            Add_Book ab=new Add_Book();
            b_num=ab.enter_details();
        }
        else if(number==2)
        {
              Add_Book ob=new Add_Book();
              ob.show_details(b_num);
        }
        else if (number==3)
        {
            System.out.println("|||+++ Checking Availability +++|||\n");
        }
        else if(number==4)
        {
            System.out.println("|||+++ Rules +++|||\n");
            System.out.println("1.   Use of mobile phones is strictly prohibited in the library premises.\n2.  Every member must sign the register available at the entrance.\n3.  Students have to bear the Identity Card for entering the Library.");
        }
        else if(number==5)
        {
            System.exit(0);
        }
        else
        {
            System.out.println("Select the right option\n");
            select();
        }
    }
}