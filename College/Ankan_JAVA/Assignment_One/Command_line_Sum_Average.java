public class Command_line_Sum_Average {
    public static void main(String[] args) {
        int i;
        if (args.length == 0) {
            System.out.println("Give the numbers please  ");
        } else {
            double sum = Double.parseDouble(args[0]);
            double avg = Double.parseDouble(args[0]);

            for (i = 0; i < args.length; i++) {
                double num = Double.parseDouble(args[i]);
                if (num % 2 == 0) {

                    sum = sum + num;
                } else {
                    sum = sum + num;
                    avg = sum / args.length;
                }
            }

            System.out.println("\nThe sum of even numbers are \n " + sum);
            System.out.println(" \nThe average of odd numbers are  \n " + avg);

        }
    }
}
