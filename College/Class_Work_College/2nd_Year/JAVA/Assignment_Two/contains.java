import java.util.*;
public class contains 
{
   public static void main(String[] args) 
   {
      Scanner sc = new Scanner(System.in);
      String input,substring;
      System.out.println("Enter The Input :\n");
      input=sc.nextLine();
      System.out.println("Enter the substring :\n");
      substring=sc.nextLine();
      if(input.contains(substring))
      {
        System.out.println("The substring is present in the input :)\n");
      }
      else
      {
        System.out.println("It is not a substring :( \n");
      }
   }   
}
