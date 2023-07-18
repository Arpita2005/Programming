import java.util.*;
public class char_index_pos
{
public static void main(String[] args) 
{
    Scanner sc=new Scanner(System.in);
    String input;
    System.out.println("Enter a string:\n");
    input=sc.nextLine();
    StringBuilder one=new StringBuilder(input);
    System.out.println("Enter the index num:\n");
    System.out.println("===========================");
    int num=sc.nextInt();
    System.out.println("The letter is:\n");
    System.out.println("\n........................\n");
    System.out.println(one.charAt(num));

  // Change character at declared index position
  System.out.println("======================================");
  System.out.println("Which letter you want to use at that index position:\n");
  char let=sc.next().charAt(0);
  System.out.println("===========================");
  System.out.println("Enter the index num:\n");
  System.out.println("===========================");
   num=sc.nextInt();
  one.setCharAt(num,let);
  System.out.println(one);
}
}