public class Command_line_maximum {
    public static void main(String[] args) {
        int i;
        if (args.length == 0) {
            System.out.println("Give the numbers please  ");
        } else {
            double max = Double.parseDouble(args[0]);
            double num;
            System.out.println("Maximum number is  \n");
            for (i = 0; i < args.length; i++) {
                num = Double.parseDouble(args[i]);
                if (num > max) {
                    max = num;
                }
            }
            System.out.println(" \t" + max);
        }
    }
}