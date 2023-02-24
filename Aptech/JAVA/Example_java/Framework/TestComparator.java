import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
 //Comparator
//In this example, instead of using the default Comparable, we define our customized Comparator for //Strings and Integers.
public class TestComparator 
{
 
   // Define a Comparator<String> to order strings in case-insensitive manner
   public static class StringComparator implements Comparator<String> 
   {
      @Override
      public int compare(String s1, String s2) 
	  {
         return s1.compareToIgnoreCase(s2);
      }
   }
 
   // Define a Comparator<Integer> to order Integers based on the least significant digit
   public static class IntegerComparator implements Comparator<Integer> 
   {
      @Override
      public int compare(Integer s1, Integer s2) 
	  {
         return s1%10 - s2%10;
      }
   }
 
   public static void main(String[] args) 
   {
      // Use a customized Comparator for Strings
      Comparator<String> compStr = new StringComparator();
 
      // Sort and search an "array" of Strings
      String[] array = {"Hello", "Hi", "HI", "hello"};
      Arrays.sort(array, compStr);
      System.out.println(Arrays.toString(array));  // [Hello, hello, Hi, HI]
      System.out.println(Arrays.binarySearch(array, "Hello", compStr)); // 1
      System.out.println(Arrays.binarySearch(array, "HELLO", compStr)); // 1 (case-insensitive)
 
      // Use a customized Comparator for Integers
      Comparator<Integer> compInt = new IntegerComparator();
 
      // Sort and search a "List" of Integers
      List<Integer> lst = new ArrayList<Integer>();
      lst.add(42);  // auto-box
      lst.add(21);
      lst.add(34);
      lst.add(13);
      Collections.sort(lst, compInt);
      System.out.println(lst);  // [21, 42, 13, 34]
      System.out.println(Collections.binarySearch(lst, 22, compInt)); // 1
      System.out.println(Collections.binarySearch(lst, 35, compInt)); // -5 (insertion at index 4)
   }
}