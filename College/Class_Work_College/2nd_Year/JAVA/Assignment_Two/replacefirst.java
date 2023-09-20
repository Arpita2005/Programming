import java.util.*;
public class replacefirst 
{
  public static void main(String[] args) 
  {
     String input;
        char i, j;
        Scanner sc = new Scanner(System.in);
        Scanner scc = new Scanner(System.in);
        System.out.println("Enter Your Input \n");
        input = sc.nextLine();
        System.out.println("Which letter you want to replace ?");
        i = scc.next().charAt(0);
        System.out.println("Enter the new character :\n");
        j = scc.next().charAt(0);
        String iStr = String.valueOf(i);
        String jStr = String.valueOf(j);
        System.out.println(input.replaceFirst(iStr,jStr)); 
  }   
}
