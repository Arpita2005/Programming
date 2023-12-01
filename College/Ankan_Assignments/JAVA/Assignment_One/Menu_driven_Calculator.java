import java.util.*;
class Calculator 
{
    public static int num1, num2, result;

    public static void input() {
        Scanner scc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        num1 = scc.nextInt();
        System.out.print("Enter the second number: ");
        num2 = scc.nextInt();
        // scc.close();
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
public class Menu_driven_Calculator
{
    public static void main(String[] args) 
    {
        while(true)
        {
          int choice;
          Scanner sc = new Scanner(System.in);
       
         System.out.println("Welcome to the Menu-Driven Calculator!\n\n");
         System.out.println(
                "Choose an operation: \n1.Addition \n2.Subtraction \n3.Division \n4.Multiplication \n5.Modulo \n6. Exit\n");
         System.out.print("Enter your choice: ");
         choice = sc.nextInt();
         switch (choice) 
         {
            case 1:
                Calculator.addition();
                break;
            case 2:
                Calculator.subtraction();
                break;
            case 3:
                Calculator.division();
                break;
            case 4:
                Calculator.multiplication();
                break;
            case 5:
                Calculator.modulo();
                break;
            case 6:
                sc.close();
                System.exit(0);
                break;
            default:
                System.out.println("Invalid choice! Please choose a valid operation.");
         }
        }
    }
}