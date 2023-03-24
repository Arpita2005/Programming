package Library;

import java.util.Scanner;

public class Add_Book extends Variables
{
    Variables d=new Variables();
    Add_Book[] ab12;
    public Add_Book(String book_name,String author_name,String publisher,float page_no,float price,float available)
    {
        this.book_name=d.Book_name();
        this.author_name=d.Author_name();
        this.publisher=d.Publisher();
        this.page_no=d.Page_No();
        this.price=d.Price();
        this.available=d.Available();
    }

    public void total()
    {
        d.Book_name();
        d.Author_name();
        d.Publisher();
        d.Page_No();
        d.Price();
        d.Available();
        System.out.println("\n++++++++++++++++++++++++++\n");
    }

    public int enter_details()
        {
            int b_num;
            Scanner in=new Scanner(System.in);
            System.out.println("|||+++ Add Book Details +++|||\n");
            System.out.println("...............................\n");
            System.out.println("Enter How Much Book You Want to Register In Library\n");
            b_num=in.nextInt();
             ab12=new Add_Book[b_num];
            System.out.println("\n.............................\n");
            for(int i=0;i<b_num;i++)
            {
                total();
                ab12[i]=new Add_Book(book_name,author_name,publisher,page_no,price,available);
            }
            return b_num;
        }

    Variables v = new Variables();
    public  void  book() //(int b_num)
    {
        v.showBook_name();
        v.showAuthor_name();
        v.showPublisher();
        v.showPrice();
        v.showPage_No();
        v.showAvailable();
        System.out.println("\n=========================\n");
        //return book(b_num);
    }
    public void show_details(int b_num)
    {
        for (int i = 0; i < b_num; i++)
        {
            ab12[i].book();
        }
    }
}
