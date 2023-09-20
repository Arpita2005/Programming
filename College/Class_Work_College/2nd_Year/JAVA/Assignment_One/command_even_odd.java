public class command_even_odd {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("No input !!\n");
        } else 
        {
            double sum_even = 0.0;
            double ave_even = 0.0;
            double sum_odd = 0.0;
            double ave_odd = 0.0;
            int even_count=0,odd_count=0;
            for (String arg : args) {
                double num = Double.parseDouble(arg);
                if (num % 2 == 0) {
                    sum_even += num;
                    even_count++;
                } else {
                    sum_odd += num;
                    odd_count++;
                }
            }

            if (even_count > 0) {
                ave_even = sum_even / even_count;
                System.out.println("Sum of even numbers: " + sum_even);
                System.out.println("Average of even numbers: " + ave_even);
            } else {
                System.out.println("No even numbers provided.");
            }

            if (odd_count > 0) {
                ave_odd = sum_odd / odd_count;
                System.out.println("Sum of odd numbers: " + sum_odd);
                System.out.println("Average of odd numbers: " + ave_odd);
            } else {
                System.out.println("No odd numbers provided.");
            }
        }
    }
}
