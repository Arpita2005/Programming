package One;
import java.util.*;

public class main
{
    public static void main(String[] args)
    {
        while (true) {
            int c;
            Scanner sc = new Scanner(System.in);
            System.out.println("\nWhich File You Want to Run ??\n1. Distance Between Two Points\n2. Salary \n3. Equative Triangle\n4. Value Of Z\n5. Exit");
            c = sc.nextInt();
            if (c == 1) {
                distance.dis();
            } else if (c == 2) {
                salary.sal();
            } else if (c == 3) {
                Triangle.tri();
            } else if (c == 4) {
                valueOfZ.input();
            } else if (c == 5) {
                System.exit(0);
            } else {
                System.out.println("Choose the correct option\n");
            }
        }
    }
}
