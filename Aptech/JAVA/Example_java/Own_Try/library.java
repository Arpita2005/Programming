import java.util.Scanner;
import java.io.*;
class basic_details
{
	public String book_title,author_name,accession_number,book_issue_month;
	public long price,page_no,number_of_available,issue_date,return_date;
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
class option //extends basic_details
{
    String book_title,author_name,accession_number,book_issue_month;
	long price,page_no,number_of_available,issue_date,return_date;
    Scanner sc=new Scanner(System.in);
    int number;  
    basic_details[] bd=new basic_details[number]; 
	//basic_details[] bd1=new basic_details[number];
    
	public int add_book()
  {
        System.out.println("How much Book Details you want to entry ??\n"); 
        number=sc.nextInt();
        Scanner first=new Scanner(System.in);
	    Scanner second=new Scanner(System.in);
        //basic_details[] bd=new basic_details[number];
		System.out.println("Add Some Book Details To Enhance Library\n");
		for(int i=0;i<number;i++)
		{  
        	System.out.println("Details Of "+(i+1)+"Book");
			System.out.println("Enter Book's Title :\n");
			book_title=first.nextLine();
			System.out.println("Enter Author's Name :\n");
			author_name=first.next();
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
    public void view(int number)
   {
	    System.out.println("Want to Take A View Of Book's DataBase !! See It ::::");
		for(int i=0;i<number;i++)
		 {
			if( number > 0)
			{
				System.out.println("Book Details of "+(i+1)+"book is :");
				System.out.println("Book Name is : "+book_title);
				System.out.println("Author Name is :"+author_name);                
                System.out.println("Total page is :"+page_no);                                       
                System.out.println("Accession Number is :"+accession_number);
				System.out.println("Book Issue Date :"+issue_date);
				System.out.println("Book Issue Month is :"+book_issue_month);
				System.out.println("Return Date is :"+return_date);
				System.out.println("\n=====================\n");
			}
			
			else if(number==0||number<0)
			{
				System.out.println(" Sorry !! Your Data Base is Empty \n");
			}
	      }
    }
    public void author_check(int number)
    {
		   Scanner sc1=new Scanner(System.in);
		   System.out.println(" Search A Book Name By Author ");
		   System.out.println(".....................\n");
		   String n;
		   System.out.println("Enter The Author's Name whose book you want to details :");
		   n=sc1.nextLine();
		   for(int i=0;i<number;i++)
		  {
			if(number>0)
			{
				if(bd[i].author_name.equalsIgnoreCase(n))
				{
				   System.out.println("Book Details of "+(i+1)+"book is :");
				   System.out.println("Book Name is : "+bd[i].book_title);
				   System.out.println("Author Name is :"+bd[i].author_name);                
                   System.out.println("Total page is :"+bd[i].page_no);                              
                   System.out.println("Accession Number is :"+bd[i].accession_number);
				   System.out.println("Book Issue Date :"+bd[i].issue_date);
				   System.out.println("Book Issue Month is :"+bd[i].book_issue_month);
				   System.out.println("Return Date is :"+bd[i].return_date);
				   System.out.println("\n=====================\n");
				}
			}
			else if(number==0||number<0)
			{
				System.out.println(" Sorry !! Your Data Base is Empty \n");
			}
		  }
        
    }
    public void title_check(int number)
    {
        Scanner tc=new Scanner(System.in);
        System.out.println(" Search A Book Name By Title Name ");
        System.out.println(".....................\n");
        String name;
        System.out.println("Enter The Book's Name whose details you want to check :");
        name=tc.nextLine();
        for(int i=0;i<number;i++)
       {
         if(number>0)
         {
             if(bd[i].book_title.equalsIgnoreCase(name))
             {
                System.out.println("Book Details of "+(i+1)+"book is :");
                System.out.println("Book Name is : "+bd[i].book_title);
                System.out.println("Author Name is :"+bd[i].author_name);                
                System.out.println("Total page is :"+bd[i].page_no);                   
                System.out.println("Number Of Availablle is :"+bd[i].number_of_available);                     
                System.out.println("Accession Number is :"+bd[i].accession_number);
                System.out.println("Book Issue Date :"+bd[i].issue_date);
                System.out.println("Book Issue Month is :"+bd[i].book_issue_month);
                System.out.println("Return Date is :"+bd[i].return_date);
                System.out.println("\n=====================\n");
             }
         }
         else if(number==0||number<0)
         {
             System.out.println(" Sorry !! Your Data Base is Empty \n");
         }
       }
    }
    public void acc_num(int number)
    {
        Scanner tc=new Scanner(System.in);
        System.out.println(" Search A Book By Accession Number ");
        System.out.println(".....................\n");
        String ac_num;
        System.out.println("Enter The Accession Name whose details you want to check :");
        ac_num=tc.nextLine();
        for(int i=0;i<number;i++)
       {
         if(number>0)
         {
             if(bd[i].accession_number.equalsIgnoreCase(ac_num))
             {
                System.out.println("Book Details of "+(1+1)+"book is :");
                System.out.println("Book Name is : "+bd[i].book_title);
                System.out.println("Author Name is :"+bd[i].author_name);                
                System.out.println("Total page is :"+bd[i].page_no);                   
                System.out.println("Number Of Availablle is :"+bd[i].number_of_available);                     
                System.out.println("Accession Number is :"+bd[i].accession_number);
                System.out.println("Book Issue Date :"+bd[i].issue_date);
                System.out.println("Book Issue Month is :"+bd[i].book_issue_month);
                System.out.println("Return Date is :"+bd[i].return_date);
                System.out.println("\n=====================\n");
             }
         }
         else if(number==0||number<0)
         {
             System.out.println(" Sorry !! Your Data Base is Empty \n");
         }
       }
    }
}
public class library
{
    public static void main(String[] args)
    {
        while(true)
    {
        int number= 0;
        Scanner input=new Scanner(System.in);
        int d;
        System.out.println(" \t\t\t================BOOK LIBRARY============");
        System.out.println("\n++++++++++++++++++--------------------+++++++++++++++++++++++\n");
        System.out.println("Press 1 to add some Book Details in data base\n");
        System.out.println("Press 2 to take a view of Data Base\n");
        System.out.println("Press 3 to search a book by Author Name\n");
        System.out.println("Press 4 to search a book by Title\n");
        System.out.println("Press 5 to search a book by Accession Number\n");
        // System.out.println("Press 6 to see the Count and Availability\n");
        // System.out.println("Press 7 to see the list accroding Accession Number\n");
        System.out.println(" -> ");
        d=input.nextInt();
        if(d==1)
        {
            new option().add_book();
        }
        else if(d==2)
        {
            new option().view(number);
        }
        else if(d==3)
        {
            new option().author_check(number);
        }
        else if(d==4)
        {
            new option().title_check(number);
        }
        else if(d==5)
        {
            new option().acc_num(number);
        }
        else
        {
            System.out.println("Sorry !! :(  Choose the correct option \n");
            
        }
    }
    }
}
     
    

				
				
			
			
