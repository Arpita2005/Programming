import java.util.Set;
import java.util.TreeSet;
import java.util.Comparator;
 
public class TestTreeSetComparator {
   public static class PhoneBookEntry implements Comparator<PhoneBookEntry> {
      public String Name;
     PhoneBookEntry(String Name)
     {
        this.Name=Name;
     }

      public PhoneBookEntry(PhoneBookEntry addr1, PhoneBookEntry addr2, PhoneBookEntry addr3)
      {}

      //@Override
      public int compare(PhoneBookEntry p1, PhoneBookEntry p2) {
         return p2.Name.compareToIgnoreCase(p1.Name);  // descending name
      }
   }
 
   public static void main(String[] args) {
      //TestTreeSetComparable t=new TestTreeSetComparable();
      PhoneBookEntry addr1 = new PhoneBookEntry("peter");
      PhoneBookEntry addr2 = new PhoneBookEntry("PAUL");
      PhoneBookEntry addr3 = new PhoneBookEntry("Patrick");
 
      Comparator<PhoneBookEntry> comp = new PhoneBookEntry(addr1,addr2,addr3);
      TreeSet<PhoneBookEntry> set = new TreeSet<PhoneBookEntry>(comp);
      set.add(addr1);
      set.add(addr2);
      set.add(addr3);
      System.out.println(set);    // [peter, PAUL, Patrick]
 
      Set<PhoneBookEntry> newSet = set.descendingSet();  // Reverse the order
      System.out.println(newSet); // [Patrick, PAUL, peter]
   }
}