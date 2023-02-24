//ArrayList with Generics (JDK 1.5)
//Let's rewrite the earlier example using generics:
// Post-JDK 1.5 with Generics
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
 
public class ArrayListPostJDK15Test 
{
   public static void main(String[] args) 
   {
      List<String> lst = new ArrayList<String>();  
	  // Inform compiler about the type
      lst.add("alpha");         // compiler checks if argument's type is String
      lst.add("beta");
      lst.add("charlie");
      System.out.println(lst);  // [alpha, beta, charlie]
      System.out.println();
      Iterator<String> iter = lst.iterator();   // Iterator of Strings
      while (iter.hasNext()) 
	  {
         String str =iter.next();  // compiler inserts downcast operator
         System.out.println(str);
      } 
       //lst.add(new Integer(1234));   // ERROR: compiler can detect wrong type
       //Integer intObj = lst.get(0);  // ERROR: compiler can detect wrong type
      System.out.println();
      // Enhanced for-loop (JDK 1.5)
      for (String str : lst) 
	  {
         System.out.println(str);
      }
   }
}