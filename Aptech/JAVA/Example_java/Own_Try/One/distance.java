package One;

import java.util.*;
public class distance {
    public static void dis() {
        float x1, y1, x2, y2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Give the value of 1st point (x1,y1) ::\n");
        x1 = sc.nextFloat();
        y1 = sc.nextFloat();
        System.out.println("Give the value of 2nd point (x2,y2) ::\n");
        x2 = sc.nextFloat();
        y2 = sc.nextFloat();

        float sub1 = x2 - x1;
        float sub2 = y2 - y1;
        float root = (sub1 * sub1) + (sub2 * sub2);
        double ans = Math.sqrt(root);
        System.out.println("\n............................\n");
        System.out.println("The Distance is :\n" + ans);

    }
}