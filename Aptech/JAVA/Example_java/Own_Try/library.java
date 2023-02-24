import java.util.*;
// import java.io.*;
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
    basic_details[] bd; 
    basic_details[] bd1;
	//basic_details[] bd1=new basic_details[number];
	public int add_book()
  {
        System.out.println("How much Book Details you want to entry ??\n"); 
        this.number=sc.nextInt();
        Scanner first=new Scanner(System.in);
        Scanner third=new Scanner(System.in);
	    Scanner second=new Scanner(System.in);
        bd=new basic_details[number];
		System.out.println("Add Some Book Details To Enhance Library\n");
		for(int i=0;i<number;i++)
		{  
        	System.out.println("Details Of "+(i+1) +" Book");
			System.out.println("Enter Book's Title :\n");
			book_title=first.nextLine();
			System.out.println("Enter Author's Name : \n");
			author_name=third.nextLine();
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
        System.out.println(number);
		return number;
    }
    public void view(int number)
   {
	    System.out.println("Want to Take A View Of Book's DataBase !! See It ::::");
        System.out.println("The number of book are : "+number);
        System.out.println("\n.......................\n");
		for(int i=0;i<number;i++)
		 {
				System.out.println("Book Details of "+(i+1) +" book is :");
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
    public void list(int number)
    {
        String j="Searching";
        System.out.println("Books are in Listed Form ---\n");
        for(int k=0;k<j.length();k++)
        {
        try {
            Thread.sleep(900);
        } catch (Exception e) {}
        System.out.println(j.charAt(k));
        }
        for(int i=0;i<number;i++)
        {
            System.out.println("|Book Details of "+(i+1) +" book is : |");
				System.out.println("|Book Name is : "+bd[i].book_title+"|");
				System.out.println("|Author Name is : "+bd[i].author_name+"|");                
                System.out.println("|Total page is : "+bd[i].page_no+"|");                                       
                System.out.println("|Accession Number is : "+bd[i].accession_number+"|");
				System.out.println("|Book Issue Date : "+bd[i].issue_date+"|");
				System.out.println("|Book Issue Month is : "+bd[i].book_issue_month+"|");
				System.out.println("|Return Date is : "+bd[i].return_date+"|");
				System.out.println("\n=====================\n");
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
				if(bd[i].author_name.equalsIgnoreCase(n))
				{
				   System.out.println("Book Details of "+(i+1) +" book is :");
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
		  }
        
    
    public void title_check(int number)
    {
        Scanner tc=new Scanner(System.in);
        System.out.println(" Search A Book Name By Title Name ");
        System.out.println("..............................\n");
        String name;
        System.out.println("Enter The Book's Name whose details you want to check :");
        name=tc.nextLine();
        for(int i=0;i<number;i++)
       {
             if(bd[i].book_title.equalsIgnoreCase(name))
             {
                System.out.println("Book Details of "+(i+1) +" book is :");
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
       }
    
    public void acc_num(int number)
    {
        Scanner tc=new Scanner(System.in);
        System.out.println(" Search A Book By Accession Number ");
        System.out.println("..................................\n");
        String ac_num;
        System.out.println("Enter The Accession Name whose details you want to check :");
        ac_num=tc.nextLine();
        for(int i=0;i<number;i++)
       {
             if((bd[i].accession_number.equalsIgnoreCase(ac_num))&&(!bd[i+1].accession_number.equalsIgnoreCase(ac_num)))
             {
                System.out.println("Book Details of "+(1+1) +"book is :");
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
             else
             {
                System.out.println("You have Given same accession number in each book..Please change it  !!\n");
             }
       }
    }
    public void availability()
    {
        System.out.println("The count Of books are : "+number);
        System.out.println("\n+++++++++++++++++++++++++++++++\n");
        System.out.println("Available Books are Listed Below :: ");
        for(int i=0;i<number;i++)
        {
            if(bd[i].number_of_available>0)
            {
                System.out.println((i+1)+"/-"+bd[i].book_title+" is available \n");
            }
            else
            {
                System.out.println("Not Available \n");
            }
        }

    }
    public void borrow(int number)
    {
        Scanner input= new Scanner(System.in);
        bd1=new basic_details[bd.length-1];
        String a_name,b_name,a_num;
        System.out.println("Enter Your Book name that you want to borrow:\n");
        a_name=input.nextLine();
        // System.out.println("Enter Your Author name that you want to borrow:\n");
        // b_name=input.nextLine();
        for(int i=0;i<number;i++)
        {
        if((bd[i].book_title.equalsIgnoreCase(a_name)))
        {
            // System.out.println("Enter the Accession Number :\n");
            // a_num=input.nextLine();
            // if(bd[i].accession_number.equalsIgnoreCase(a_num))
            // {
            System.out.println("Book Name is : "+bd[i].book_title);
            System.out.println("Author Name is :"+bd[i].author_name);                
            System.out.println("Total page is :"+bd[i].page_no);                                   
            System.out.println("Accession Number is :"+bd[i].accession_number);
            System.out.println("Book Issue Date :"+bd[i].issue_date);
            System.out.println("Book Issue Month is :"+bd[i].book_issue_month);
            System.out.println("Return Date is :"+bd[i].return_date);
            System.out.println("You Have succesfully Borrowed !!\n");
            // }
            System.out.println("\n.........................\n");
            for(int k=0,l=0;k<bd.length;k++)
            {
                if(bd[k]!=bd[i])
                {
                    bd1[l]=bd[k];
                    l++;
                }
            }
            System.out.println("Before Declaration :"+Arrays.toString(bd)+"\n");
            System.out.println("After Declaration :"+Arrays.toString(bd1)+"\n");
            System.out.println(".................................");
        }
        }
        System.out.println("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
       // System.out.println("After borrowing the total number of books are :"+(number-1));

    }
}
public class library
{
    public static void main(String[] args)
    {
        
        int number= 0;
        Scanner input=new Scanner(System.in);
        int d;
        option o=new option();
        while(true)
    {
        System.out.println(" \t\t\t================ BOOK :: LIBRARY ============");
        System.out.println("\n\t\t\t++++++++++++++++++---------------+++++++++++++++++++++\n");
        System.out.println("Press 1 to add some Book Details in data base\n");
        System.out.println("Press 2 to take a view of Data Base\n");
        System.out.println("Press 3 to search a book by Author Name\n");
        System.out.println("Press 4 to search a book by Title\n");
        System.out.println("Press 5 to search a book by Accession Number\n");
        System.out.println("Press 6 to see the Count and Availability\n");
        System.out.println("Press 7 To Take A Look of All The Rules And Regulations\n");
        System.out.println("Press 8 To See Books are in Listed Form\n");
        System.out.println("Press 9 To Borrow A Book( Can Borrow a single book at a time)\n");
        System.out.println("Want To Exit !! Press 10");
        System.out.println("\n");
        System.out.print(" -> ");
        d=input.nextInt();
        System.out.println("\n");
        if(d==1)
        {
            number=o.add_book();
        }
        else if(d==2)
        {
            o.view(number);
        }
        else if(d==3)
        {
            o.author_check(number);
        }
        else if(d==4)
        {
            o.title_check(number);
        }
        else if(d==5)
        {
            o.acc_num(number);
        }
        else if(d==6)
        {
            o.availability();
        }
        else if(d==7)
        {
            System.out.println("Strict silence, decorum and discipline must be maintained in the library.");
            System.out.println("\n1.   Use of mobile phones is strictly prohibited in the library premises.\n2.  Every member must sign the register available at the entrance.\n3.  Students have to bear the Identity Card for entering the Library ");
        }
        else if(d==8)
        {
            o.list(number);
        }
        else if(d==9)
        {
            o.borrow(number);
        }
        else if(d==10)
        {
            System.exit(0);
        }
        else
        {
            System.out.println("Sorry !! :(  Choose the correct option \n"); 
        }
    }
    }
}			