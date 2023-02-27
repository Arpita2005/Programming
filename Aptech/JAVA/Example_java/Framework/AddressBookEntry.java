import java.util.TreeSet;
 
public class AddressBookEntry {
   String add;
   AddressBookEntry(String add)
   {
      this.add=add;
   }
   public static void main(String[] args) {
      AddressBookEntry addr1 = new AddressBookEntry("peter");
      AddressBookEntry addr2 = new AddressBookEntry("PAUL");
      AddressBookEntry addr3 = new AddressBookEntry("Patrick");
 
      TreeSet<AddressBookEntry> set = new TreeSet<AddressBookEntry>();
      set.add(addr1);
      set.add(addr2);
      set.add(addr3);
      System.out.println(set); // [Patrick, PAUL, peter]
 
      System.out.println(set.floor(addr2));   // PAUL
      System.out.println(set.lower(addr2));   // Patrick
      System.out.println(set.headSet(addr2)); // [Patrick]
      System.out.println(set.tailSet(addr2)); // [PAUL, peter]
   }
}