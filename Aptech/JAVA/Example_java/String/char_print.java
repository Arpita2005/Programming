import java.util.*;
public class char_print
{
     public static void main(String[] args) 
     {
        Scanner str = new Scanner(System.in) ;
        String  one,two,total;
        System.out.println("Enter your first strig:\n");
        one=str.nextLine();
        System.out.println("Enter your second strig:\n");
        two=str.nextLine();
        total=one+two;
        System.out.println("Final string is:\n"+total);
        System.out.println("============================");
        System.out.println("The length is ="+total.length());
        System.out.println("The letters are:\n");
        System.out.println("...........................");
        for(int i=0;i<total.length();i++)
        {
            System.out.println(total.charAt(i));
        }

    }
}
