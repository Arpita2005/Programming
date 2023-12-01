public class Exception_Try {
    public static void main(String[] args) {
        try {
            int numerator = 10;
            int denominator = 0;
            int result = numerator / denominator; // This will throw an ArithmeticException
            System.out.println("Result: " + result); // This line will not be reached
        } catch (ArithmeticException exception) {
            System.out.println("Caught an ArithmeticException: Division by zero is not allowed.");
        } finally {
            System.out.println("This will always execute, even if there was an exception.");
        }
    }
}
