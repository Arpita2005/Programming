package advance_cal;
import java.util.*;
public class division
{
    int num1,num2;
    Scanner input=new Scanner(System.in);
    public void division()
    {
        System.out.println("Division");
        System.out.println("..........................\n");
        System.out.println("Enter the first number:\n");
        num1=input.nextInt();
        System.out.println("Enter the second number:\n");
        num2=input.nextInt();
        System.out.println("Your result is:"+(num1/num2));
    }
}
