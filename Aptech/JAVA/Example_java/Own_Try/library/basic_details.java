package library;
import java.io.*;
public class basic_details
{
     String book_title,author_name,accession_number,book_issue_month;
	 long price, page_no, number_of_available;
     long issue_date, return_date;
	basic_details(String book_title, String author_name,String accession_number,String book_issue_month,long price,long page_no,long number_of_available,long issue_date,long return_date)
	{
		this.book_title=book_title;
		this.author_name=author_name;
		this.accession_number=accession_number;
		this.price=price;
		this.page_no=page_no;
		this.number_of_available=number_of_available;
		this.issue_date=issue_date;
		this.book_issue_month=book_issue_month;
		this.return_date=return_date;
	}
}


