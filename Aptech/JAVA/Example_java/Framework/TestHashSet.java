import java.util.HashSet;
import java.util.Set;
class BookS
{
    int a;
	String n;
     BookS(int i, String s)
    {
       a=i;
	   n=s;
    }
}
public class TestHashSet 
{
   public static void main(String[] args) 
   {
      BookS book1 = new BookS(1, "Java for Dummies");
      BookS book1Dup = new BookS(1, "Java for the Dummies"); // same id as above
      BookS book2 = new BookS(2, "Java for more Dummies");
      BookS book3 = new BookS(3, "more Java for more Dummies");
 
      Set<BookS> set1 = new HashSet<BookS>();
      set1.add(book1);
      set1.add(book1Dup); // duplicate id, not added
      set1.add(book1);    // added twice, not added
      set1.add(book3);
      set1.add(null);     // Set can contain a null
      set1.add(null);     // but no duplicate
      set1.add(book2);
      System.out.println(set1); // [null, 1: Java for Dummies,
                                //  2: Java for more Dummies, 3: more Java for more Dummies]
 
      set1.remove(book1);
      set1.remove(book3);
      System.out.println(set1); // [null, 2: Java for more Dummies]
 
      Set<BookS> set2 = new HashSet<BookS>();
      set2.add(book3);
      System.out.println(set2); // [3: more Java for more Dummies]
      set2.addAll(set1);        // "union" with set1
      System.out.println(set2); // [null, 2: Java for more Dummies, 3: more Java for more Dummies]
 
      set2.remove(null);
      System.out.println(set2); // [2: Java for more Dummies, 3: more Java for more Dummies]
      set2.retainAll(set1);     // "intersection" with set1
      System.out.println(set2); // [2: Java for more Dummies]
   }
}