import java.util.*;

public class toupper
{
    public static void main(String[] args) 
    {
      String s;
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter the input : \n");
      s=sc.nextLine();
      System.out.println("After using upper case :\n");
      String p = s.toUpperCase();
      System.out.println(p);

    } 
}
