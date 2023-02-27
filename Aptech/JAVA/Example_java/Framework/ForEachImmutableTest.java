import java.util.List;
import java.util.ArrayList;
 //Using Enhanced for-loop on Collection of "Immutable" Objects (such as String)
public class ForEachImmutableTest 
{
   public static void main(String[] args) 
   {
      List<String> l = new ArrayList<String>();
      l.add("alpha");
      l.add("beta");
      l.add("charlie");
      System.out.println(l);   // [alpha, beta, charlie]
 
      for (String str : l) 
	  {
         str += "change!";   // cannot modify "immutable" objects because of string
     }
      System.out.println(l);   // [alpha, beta, charlie]
   }
}
/*
 * An ordered collection (also known as a sequence). 
 * The user of this interface has precise control over where in the list each element is inserted. 
 * The user can access elements by their integer index (position in the list), and search for elements in the list.
 */