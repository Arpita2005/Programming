import java.util.LinkedHashSet;
import java.util.Set;
public class BookName {
   int id;
   String name;
    BookName(int i,String n)
    {
       id=i;
       name=n;
    }
   public static void main(String[] args) {
      BookName book1 = new BookName(1, "Java for Dummies");
      BookName book1Dup = new BookName(1, "Java for the Dummies"); // same id as above
      BookName book2 = new BookName(2, "Java for more Dummies");
      BookName book3 = new BookName(3, "more Java for more Dummies");
 
      Set<BookName> set = new LinkedHashSet<BookName>();
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