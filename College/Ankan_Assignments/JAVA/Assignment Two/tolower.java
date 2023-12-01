import java.util.Scanner;

public class tolower 
{
    public static void main(String[] args) 
    {
      String s;
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter the input : \n");
      s=sc.nextLine();
      System.out.println("After using lower case :\n");
      String p = s.toLowerCase();
      System.out.println(p);

    } 
}
