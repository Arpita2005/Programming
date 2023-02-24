import java.util.List;
import java.util.ArrayList;
 //Using Enhanced for-loop on Collection of "Mutable" Objects (such as StringBuilder)
public class ForEachMutableTest 
{
   public static void main(String[] args) 
   {
	  int i=0;
      List<StringBuilder> lst = new ArrayList<StringBuilder>();
      lst.add(new StringBuilder("alpha"));
      lst.add(new StringBuilder("beta"));
      lst.add(new StringBuilder("charlie"));
      System.out.println(lst);   // [alpha, beta, charlie]
 
      for(StringBuilder sb : lst) 
	  {
         sb.append("88");   // can modify "mutable" objects
      }
      System.out.println(lst);  // [alpha88, beta88, charlie88]
   }
}