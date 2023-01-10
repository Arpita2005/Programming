import java.util.Scanner;
public class str_compare 
{
    public static void main(String args[]) {
        Scanner check=new Scanner(System.in);
        String  one,two;
        System.out.println("Enter your first strig:\n");
        one=check.nextLine();
        System.out.println("Enter your second strig:\n");
        two=check.nextLine();
        if(one.compareTo(two)==0||one.compareToIgnoreCase(two)==0)
        {
            System.out.println("They are equal\n");
        }
        else{
            System.out.println("They are not equal\n");
        }
        
    }
}
