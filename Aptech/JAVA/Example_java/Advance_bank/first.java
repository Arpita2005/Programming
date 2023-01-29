package Advance_bank;
import java.util.*;
public class first
{   char select;
    Scanner input=new Scanner(System.in);
    public void first()
    {
        while (true) {
            System.out.println(".======HOME======.\n");
            System.out.println("What do you want to do ?\nA. Open Single Account\nB. Open Multiple Account\nC. Open Existing Account\nD. Return\n");
            select = input.next().charAt(0);
            if (select == 'A') {
                Open_1_acc oc = new Open_1_acc();
                oc.open_single_account();
            } else if (select == 'B') {
                open_many_acc mc = new open_many_acc();
                mc.many_acc();
            } else if (select == 'C') {

            }
        }
    }
}
