import java.util.*;
public class starts_with 
{
  public static void main(String[] args)
  {
      String sen,one;
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter The Input :\n");  
      sen=sc.nextLine();
      System.out.println("Enter the begining character :\n");
      one=sc.nextLine();
      System.out.println(sen.startsWith(one));
}   
}
