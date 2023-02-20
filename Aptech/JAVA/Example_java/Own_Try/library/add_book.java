package library;
import java.util.*;
public class add_book
{
    String book_title,author_name,accession_number,book_issue_month;
	long price,page_no,number_of_available,issue_date,return_date;
    Scanner sc=new Scanner(System.in);
    int number;  
	basic_details[] bd;
    public  int add_book()
    {
        System.out.println("How much Book Details you want to entry ??\n"); 
        number=sc.nextInt();
        Scanner first=new Scanner(System.in);
	    Scanner second=new Scanner(System.in);
        bd=new basic_details[number];
		System.out.println("Add Some Book Details To Enhance Library\n");
		for(int i=0;i<number;i++)
		{  
        	System.out.println("Details Of "+(i+1)+"Book");
			System.out.println("Enter Book's Title :\n");
			book_title=first.nextLine();
			System.out.println("Enter Author's Name :\n");
			author_name=first.nextLine();
			System.out.println("Enter the Accession number :\n");
			accession_number=first.nextLine();
			System.out.println("Enter the Price :\n");
			price=second.nextLong();
			System.out.println("Enter the Page number :\n");
			page_no=second.nextLong();
			System.out.println("Enter How much quantity of books you want to issue :\n");
			number_of_available=second.nextLong();
			System.out.println("Enter the Book-Issue Date :\n");
			issue_date=second.nextLong();
			System.out.println("Enter the Book-Issue Month :\n");
			book_issue_month=first.nextLine();
			return_date=issue_date+10;
			System.out.println("Return date should be :"+return_date+" Month is :"+book_issue_month);
			System.out.println("\n====================:::::::::::::::===================\n");

			bd[i]= new basic_details(book_title,author_name,accession_number,book_issue_month,price,page_no,number_of_available,issue_date,return_date);
		}
		return number;
    }
}
