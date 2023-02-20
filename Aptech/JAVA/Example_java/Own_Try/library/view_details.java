package library;

public class view_details extends basic_details
{
    view_details(String book_title, String author_name, String accession_number, String book_issue_month, long price,
            long page_no, long number_of_available, long issue_date, long return_date) {
        super(book_title, author_name, accession_number, book_issue_month, price, page_no, number_of_available, issue_date,
                return_date);
        
    }

    public void view(int number)
    {
       
        basic_details[] bd=new basic_details[number];
        System.out.println("Want to Take A View Of Book's DataBase !! See It ::::");
		for(int i=0;i<number;i++)
		 {
				System.out.println("Book Details of "+(i+1)+" book is :");
				System.out.println("Book Name is : "+bd[i].book_title);
				System.out.println("Author Name is :"+bd[i].author_name);                
                System.out.println("Total page is :"+bd[i].page_no);                                       
                System.out.println("Accession Number is :"+bd[i].accession_number);
				System.out.println("Book Issue Date :"+bd[i].issue_date);
				System.out.println("Book Issue Month is :"+bd[i].book_issue_month);
				System.out.println("Return Date is :"+bd[i].return_date);
				System.out.println("\n=====================\n");
                bd[i]= new basic_details(book_title,author_name,accession_number,book_issue_month,price,page_no,number_of_available,issue_date,return_date);
			
	      }
        }
}
