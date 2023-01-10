import java.util.*;
public class substr 
{
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String input;
        int start_num;
        System.out.println("Enter your string:\n");
        input=sc.nextLine();
        System.out.println("Enter your begining index number:\n");
        start_num=sc.nextInt();
        String name=input.substring(start_num);
        System.out.println(name);
    }
}
