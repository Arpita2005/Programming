import java.util.LinkedHashSet;
import java.util.Set;
public class TestLinkedHashSet {
   public static void main(String[] args) {
      Book book1 = new Book(1, "Java for Dummies");
      Book book1Dup = new Book(1, "Java for the Dummies"); // same id as above
      Book book2 = new Book(2, "Java for more Dummies");
      Book book3 = new Book(3, "more Java for more Dummies");
 
      Set<Book> set = new LinkedHashSet<Book>();
      set.add(book1);
      set.add(book1Dup); // duplicate id, not added
      set.add(book1); // added twice, not added
      set.add(book3);
      set.add(null);  // Set can contain a null
      set.add(null);  // but no duplicate
      set.add(book2);
      System.out.println(set);  // [1: Java for Dummies, 3: more Java for more Dummies,
                                //  null, 2: Java for more Dummies]
   }
}