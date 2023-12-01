/* import java.util.*;
public class format 
{
  public static void main(String[] args) 
  {
     String input,m;
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter The Input :\n");
     input=sc.nextLine();
     m=String.format(input);
     System.out.println(m);
  }   
}
*/
// We can use multiple intcyerfaces to create a class
interface Bicycle
{
  void apply_break(int decreamnet);
  void speed_up(int increament);
}

class Avon_cycle implements Bicycle