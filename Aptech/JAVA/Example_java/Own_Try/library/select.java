package library;
import java.util.Scanner;
public class select
{
public static void main(String[] args) 
{
    add_book ad=new add_book();
    view_details a=new view_details(null, null, null, null, 0, 0, 0, 0, 0);
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
        System.out.print(" -> ");
        d=input.nextInt();

        if(d==1)
        {
            ad.add_book();
        }
        else if(d==2)
        {
            a.view(number);
        }
        // else if(d==3)
        // {
        //     new option().author_check(number);
        // }
        // else if(d==4)
        // {
        //     new option().title_check(number);
        // }
        // else if(d==5)
        // {
        //     new option().acc_num(number);
        // }
        else
        {
            System.out.println("Sorry !! :(  Choose the correct option \n");
            
        }
    }
}
}
