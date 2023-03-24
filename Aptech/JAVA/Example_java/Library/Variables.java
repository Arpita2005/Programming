package Library;
import java.util.*;
public class Variables
{
    public String book_name,author_name,publisher;
    public Float price,page_no,available;
    Scanner str=new Scanner(System.in);
    Scanner fl=new Scanner(System.in);
    public String  Book_name()
    {
        System.out.println("Enter Book Name :-\n");
         book_name=str.nextLine();
         return book_name;
    }
    public void showBook_name()
    {
        System.out.println("Book Name is : \n"+book_name);
    }
    public String Author_name()
    {
        System.out.println("Enter Author Name :-\n");
        author_name=str.nextLine();
        return author_name;
    }
    public void showAuthor_name()
    {
        System.out.println("Author Name is : \n"+author_name);
    }
    public String Publisher()
    {
        System.out.println("Enter Publisher Name :-");
        publisher=str.nextLine();
        return publisher;
    }
    public void showPublisher()
    {
        System.out.println("Publisher Name is : \n"+publisher);
    }
    public float Price()
    {
        System.out.println("Enter The Price :-\n");
        price=fl.nextFloat();
        return price;
    }
    public void showPrice()
    {
        System.out.println("Price is : \n"+price);
    }
    public float Page_No()
    {
        System.out.println("Enter The Page Number :-\n");
        page_no=fl.nextFloat();
        return page_no;
    }
    public void showPage_No()
    {
        System.out.println("Page number is : \n"+page_no);
    }
    public float Available()
    {
        System.out.println("Enter the number of Quantity :-\n");
        available=fl.nextFloat();
        return  available;
    }
    public void showAvailable()
    {
        System.out.println("The Number Of Quantity is : \n"+available);

    }

}
