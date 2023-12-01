import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int number, fact = 1, temp;
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Enter the number ");
            number = input.nextInt();
            for (temp = number; temp >= 1; temp--) {
                fact = fact * temp;
            }
            System.out.println("Factorial is  :  " + fact);
            input.close();
        }
    }
}
