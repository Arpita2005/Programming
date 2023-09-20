import java.util.*;

class accamt {
    public static void gross_salary() {
        Scanner o = new Scanner(System.in);
        double amt;
        System.out.println("Enter your earning : ");
        amt = o.nextDouble();
        if (amt <= 50000) {
            System.out.println("NIL (Tax not required) \n"); // No tax up to Rs. 50,000
        } else if ((amt > 50000) && (amt < 60000)) {
            amt = amt * 0.1; // 10% interest up to Rs. 60,000
            System.out.println("\nAmount of tax you need to pay :Rs " + amt);
        } else if ((amt > 60000) && (amt < 150000)) {
            amt = amt * 0.2; // 20% interest on up to Rs. 1,50,000
            System.out.println("\nAmount of tax you need to pay :Rs " + amt);
        } else if (amt > 150000) {
            amt = amt * 0.3; // 30% interest on Above Rs. 1,50,000
            System.out.println("\nAmount of tax you need to pay : Rs. " + amt);
        }
    }
}

public class one 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in); 

        while (true) 
        {
            System.out.println("Options:");
            System.out.println("1. Calculate Income Tax");
            System.out.println("2. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();

            switch (choice) 
            {
                case 1:
                    accamt.gross_salary();
                    break;
                case 2:
                    System.out.println("Exiting program.");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
