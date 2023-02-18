	import java.util.*;  
	class TestCollection4
	{  
		 public static void main(String args[])
		 {  
			  ArrayList<String> al=new ArrayList<String>();  
			  al.add("Ravi");  
			  al.add("Vijay");  
			  al.add("Ajay");  
			  
			  ArrayList<String> al2=new ArrayList<String>();  
			  al2.add("Sonoo");  
			  al2.add("Hanumat");  
			  al.addAll(al2); //adding second list in first list  
			  Iterator itr=al.iterator();  
			  while(itr.hasNext())
			  {  
					System.out.println(itr.next());  
			  }  
		 }  
	}  
/*
 *  AddAll :: It add a list with another.
 * In this case it adds the second list with first list
 */