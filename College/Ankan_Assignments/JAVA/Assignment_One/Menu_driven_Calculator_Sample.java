import java.util.*;

class Calculator1 {
    public static int num1, num2, result;

    public static void input() {
       Scanner sc = new Scanner(System.in) ;
            System.out.print("Enter the first number: ");
            num1 = sc.nextInt();
            System.out.print("Enter the second number: ");
            num2 = sc.nextInt();
        
    }

    public static void addition() {
        input();
        result = num1 + num2;
        System.out.println("The result of addition is: " + result);
    }

    public static void subtraction() {
        input();
        result = num1 - num2;
        System.out.println("The result of subtraction is: " + result);
    }

    public static void division() {
        input();
        result = num1 / num2;
        System.out.println("The result of division is: " + result);
    }

    public static void multiplication() {
        input();
        result = num1 * num2;
        System.out.println("The result of multiplication is: " + result);
    }

    public static void modulo() {
        input();
        result = num1 % num2;
        System.out.println("The result of modulo is: " + result);
    }
}

public class Menu_driven_Calculator_Sample
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;

        while (true) {
            System.out.println("Welcome to the Menu-Driven Calculator!\n");
            System.out.println("Choose an operation:\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Modulo\n6.Exit\n");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    Calculator1.addition();
                    break;
                case 2:
                    Calculator1.subtraction();
                    break;
                case 3:
                    Calculator1.division();
                    break;
                case 4:
                    Calculator1.multiplication();
                    break;
                case 5:
                    Calculator1.modulo();
                    break;
                case 6:
                    System.out.println("Exiting program.");
                    sc.close(); // Close the Scanner before exiting
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice! Please choose a valid operation.");
            }
        }
    }
}
