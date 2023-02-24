import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class TestArrayAsList 
{
   public static void main(String[] args) 
   {
      String[] strs = {"alpha", "beta", "charlie"};
      System.out.println(Arrays.toString(strs));   // [alpha, beta, charlie]
 
      List<String> lst = Arrays.asList(strs);
      System.out.println(lst);  // [alpha, beta, charlie]
 
      // Changes in array or list write through
      strs[0] += "88";
      lst.set(2, lst.get(2) + "99");
      System.out.println(Arrays.toString(strs)); // [alpha88, beta, charlie99]
      System.out.println(lst);  // [alpha88, beta, charlie99]
 
      // Initialize a list using an array
      List<Integer> lstInt = Arrays.asList(22, 44, 11, 33);
      System.out.println(lstInt);  // [22, 44, 11, 33]
   }
}