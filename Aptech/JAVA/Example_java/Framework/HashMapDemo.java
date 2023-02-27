    import java.util.*;  
    class HashMapDemo
	{  
      public static void main(String args[])
	  {  
		  HashMap<Integer,String> hm=new HashMap<Integer,String>();  
		  hm.put(100,"Amit");  
		  hm.put(101,"Vijay");  
		  hm.put(102,"Rahul");  
		  for(Map.Entry m : hm.entrySet())
		  {  
				System.out.println(m.getKey()+" => "+m.getValue());  
          }  
     }  
    }  
	/* 
	An object that maps keys to values. A map cannot contain duplicate keys; each key can map to at most one value.
    This interface takes the place of the Dictionary class, which was a totally abstract class rather than an interface.
    The Map interface provides three collection views, 
    */