package Library;
import java.util.*;
public class date {
    int date, return_date, year, k;
    Scanner one = new Scanner(System.in);
    Scanner two = new Scanner(System.in);
    String month;
    public void date() {
        System.out.println("Enter your Book Issue date :-\n");
        date = one.nextInt();
        System.out.println("Enter Your Book Issue Month :-\n");
        month = two.nextLine();
        System.out.println("Enter Your Book Issue Year :-\n");
        year = one.nextInt();
        System.out.println("You have to return the book in between 10 days\n");
        return_date = date + 10;
        if (month == "January") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of January of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of February of " + year);
            }
        } else if (month == "February") {
            if (year % 4 == 0) {
                if (return_date < 29) {
                    System.out.println("Your return Date is " + return_date + " of February of " + year);
                } else if (return_date > 29) {
                    k = return_date - 29;
                    System.out.println("Return date is " + k + " of March of " + year);
                }
            } else if (year % 4 != 0) {
                if (return_date < 28) {
                    System.out.println("Your return Date is " + return_date + " of February of " + year);
                } else if (return_date > 28) {
                    k = return_date - 28;
                    System.out.println("Return date is " + k + " of March of " + year);
                }
            }
        } else if (month == "March") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of March of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of April of " + year);
            }
        } else if (month == "April") {
            if (return_date < 30) {
                System.out.println("Your return Date is " + return_date + " of April of " + year);
            } else if (return_date > 30) {
                k = return_date - 30;
                System.out.println("Return date is " + k + " of May of " + year);
            }
        } else if (month == "May") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of May of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of June of " + year);
            }
        } else if (month == "June") {
            if (return_date < 30) {
                System.out.println("Your return Date is " + return_date + " of June of " + year);
            } else if (return_date > 30) {
                k = return_date - 30;
                System.out.println("Return date is " + k + " of July of " + year);
            }
        } else if (month == "July") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of July of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of August of " + year);
            }
        } else if (month == "August") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of August of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of September of " + year);
            }
        } else if (month == "September") {
            if (return_date < 30) {
                System.out.println("Your return Date is " + return_date + " of Septemebr of " + year);
            } else if (return_date > 30) {
                k = return_date - 30;
                System.out.println("Return date is " + k + " of October of " + year);
            }
        } else if (month == "October") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of October of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of November of " + year);
            }
        } else if (month == "November") {
            if (return_date < 30) {
                System.out.println("Your return Date is " + return_date + " of November of " + year);
            } else if (return_date > 30) {
                k = return_date - 30;
                System.out.println("Return date is " + k + " of December of " + year);
            }
        } else if (month == "December") {
            if (return_date < 31) {
                System.out.println("Your return Date is " + return_date + " of Decemebr of " + year);
            } else if (return_date > 31) {
                k = return_date - 31;
                System.out.println("Return date is " + k + " of January of " + year + 1);
            }
        }

    }
}

