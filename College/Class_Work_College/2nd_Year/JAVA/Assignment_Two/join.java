import java.util.*;
public class join 
{
  public static void main(String[] args) 
  {
     Scanner sc=new Scanner(System.in);
     String i,k;
     System.out.println("Give your input :\n");
     i=sc.nextLine();
     k=i.join(i,' ');
    System.out.println(k);
  }   
}
