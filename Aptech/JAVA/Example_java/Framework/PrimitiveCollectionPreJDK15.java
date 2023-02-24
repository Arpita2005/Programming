// Pre-JDK 1.5
//Pre JDK 1.5 Collections of Primitives
//Pre-JDK 1.5 does not support generics, auto-boxing and for-each loop. The codes for collection can be //quite messy and more importantly, not type-safe.
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;
 
public class PrimitiveCollectionPreJDK15 {
   public static void main(String[] args) {
      List lst = new ArrayList();
 
      // Add 10 random primitive int into the List
      Random random = new Random();
      for (int i = 1; i <= 10; ++i) 
	  {
         // Wrap the primitive int into Integer, upcast to Object
         lst.add(new Integer(random.nextInt(10)));
      }
      System.out.println(lst);
       System.out.println("==============================================");
      Iterator iter = lst.iterator();
      while (iter.hasNext()) 
	  {
         // Explicit downcast to Integer, then unwrap to int
         int i = ((Integer)iter.next()).intValue();   // un-safe at runtime
         System.out.println(i);
      }
   }
}