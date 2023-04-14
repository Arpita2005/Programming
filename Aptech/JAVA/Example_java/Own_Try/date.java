import java.util.*;
public class date 
{
    public static void date() 
    {
        
    int date, return_date, year, k;
    Scanner one = new Scanner(System.in);
    Scanner two = new Scanner(System.in);
    String month;
        System.out.println("Enter your Book Issue date :-\n");
        date = one.nextInt();
        System.out.println("Enter Your Book Issue Month :-\n");
        month = two.nextLine();
        System.out.println("Enter Your Book Issue Year :-\n");
        year = one.nextInt();
        System.out.println("You have to return the book in between 10 days\n");
        return_date = date + 10;
        if (month == "January") 
        {
            if (return_date < 31) 
            {
                System.out.println("Your return Date is " + return_date + " of January of " + year);
            } 
            else if (return_date > 31) 
            {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of February of " + year);
            }
        } 
        else if (month == "February") 
        {
            if (year % 4 == 0) 
            {
                if (return_date < 29) 
                {
                    System.out.println("Your return Date is " + return_date + " of February of " + year);
                } else if (return_date > 29) 
                {
                    k = return_date - 29;
                    System.out.println("Return date is " + k + " of March of " + year);
                }
            }

        
        }
    }
    public static void main(String[] args) 
    {
        date();

    }
    
    }

