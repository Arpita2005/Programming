import java.util.*;  
class AllBook implements Comparable<Book>
{  
	int id;  
	String name,author,publisher;  
	int quantity; 
	
	public AllBook(int id, String name, String author, String publisher, int quantity)
	{  
		this.id = id;  
		this.name = name;  
		this.author = author;  
		this.publisher = publisher;  
		this.quantity = quantity;  
	}  
	public int compareTo(Book b) 
	{  
		if(id>b.id)
		{  
			return 1;  
		}
		else if(id<b.id)
		{  
			return -1;  
		}
		else
		{  
			return 0;  
		}  
	}  
}  
public class TreeSetExample 
{  
	public static void main(String[] args) 
	{  
		Set<AllBook> set=new TreeSet<AllBook>();
		//Creating Books  
		AllBook b1=new AllBook(121,"Let us C","Yashwant Kanetkar","BPB",8);
		AllBook b2=new AllBook(233,"Operating System","Galvin","Wiley",6);
		AllBook b3=new AllBook(101,"Data Communications & Networking","Forouzan","Mc Graw Hill",4);
		//Adding Books to TreeSet  
		set.add(b1);  
		set.add(b2);  
		set.add(b3);  
		//Traversing TreeSet  
		for(AllBook b:set)
		{  
			System.out.println(b.id+" ,"+b.name+" ,"+b.author+", "+b.publisher+" ,"+b.quantity);  
		}  
	}  
}  