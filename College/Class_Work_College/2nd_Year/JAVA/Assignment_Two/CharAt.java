import java.util.*;
public class CharAt 
{
  public static void main(String[] args) 
  {
    String sen;
    int i;
    char sen1;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter The Input :\n");
    sen=sc.nextLine();
    System.out.println("Enter the index position :\n");
    i=sc.nextInt();
    sen1=sen.charAt(i);
    System.out.println(sen1);
  }   
}
