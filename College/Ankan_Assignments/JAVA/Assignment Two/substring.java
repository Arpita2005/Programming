import java.util.Scanner;

public class substring 
{
  public static void main(String[] args) 
  {
      Scanner sc = new Scanner(System.in);
      String input,substring;
      System.out.println("Enter The Input :\n");
      input=sc.nextLine();
      System.out.println("Enter the substring :\n");
      substring=sc.nextLine();
      if(input.substring(5, 9))
      {
        System.out.println("It is a substring \n");
      }
      else
      {
        System.out.println("It is not a substring \n");
      }
  }   
}