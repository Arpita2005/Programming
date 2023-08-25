import java.util.*;
public class contains 
{
   public static void main(String[] args) 
   {
      Scanner sc = new Scanner(System.in);
    //  String input,substring;
      String msg = "Meet me at 4 PM at Canteen.";
      String substr = "canteen";
      
   //   System.out.println("Enter The Input :\n");
   //   input=sc.nextLine();
   //   System.out.println("Enter the substring :\n");
   //   substring=sc.nextLine();
      if(msg.contains(substr))
      {
        System.out.println("The substring is present in the msg.)\n");
      }
      else
      {
        System.out.println("It is not a substring :( \n");
      }
   }   
}
