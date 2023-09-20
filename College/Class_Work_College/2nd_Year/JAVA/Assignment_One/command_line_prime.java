public class command_line_prime {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Usage: java PrimeChecker <number>");
            return;
        }

        try {
            double n = Double.parseDouble(args[0]);

            if (n <= 1) {
                System.out.println(n + " is not a prime number.");
                return;
            }

            boolean prime = true;
            for (double i = 2.0; i <= Math.sqrt(n); i++) {
                if (n % i == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                System.out.println(n + " is a prime number.");
            } else {
                System.out.println(n + " is not a prime number.");
            }
        } catch (NumberFormatException e) {
            System.out.println("Invalid input. Please enter a valid double.");
        }
    }
}
