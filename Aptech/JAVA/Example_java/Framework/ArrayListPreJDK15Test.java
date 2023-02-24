// Pre-JDK 1.5
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
 
public class ArrayListPreJDK15Test 
{
   public static void main(String[] args) 
   {
      List lst = new ArrayList();  // A List contains instances of Object. Upcast ArrayList to List
      lst.add("alpha");            // add() takes Object. String upcast to Object implicitly
      lst.add("beta");
      lst.add("charlie");
      System.out.println(lst);     // [alpha, beta, charlie]
 
      // Get a "iterator" instance from List to iterate thru all the elements of the List
      Iterator iter = lst.iterator();
      while (iter.hasNext()) 
	  {      // any more element
         // Retrieve the next element, explicitly downcast from Object back to String
         String str = (String)iter.next();
         System.out.println(str);
      }
   }
}