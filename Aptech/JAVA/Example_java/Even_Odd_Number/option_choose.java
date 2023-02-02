package Even_Odd_Number;
import java.util.*;
public class option_choose
{
    int choose;
    Scanner sc=new Scanner(System.in);
    public void select() {
        while (true)
        {
            System.out.println("What do you want to do ?\n1/. To print Even number\n2/. To print Odd numbers\n3/. Return Back");
            choose = sc.nextInt();
            if (choose == 1) {
                even_detector ed = new even_detector();
                ed.even_detector();
            } else if (choose == 2) {
                odd_detector od = new odd_detector();
                od.odd_detector();
            } else if(choose==3)
            {
                System.out.println("\n");
                System.exit(0);
            }
            else
            {
                System.out.println("Sorry You Have select wrong option !!\n");
            }
        }
    }
}
