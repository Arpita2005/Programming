class Student3
{  
	 int id;  
	 String name;  
}  
class TestStudent3
{  
	 public static void main(String args[])
	 {  
		  //Creating two objects  
		  Student3 s1=new Student3();  
		  Student3 s2=new Student3();  
		  //Initializing objects  
		  s1.id=101;  
		  s1.name="Swastika"; 
		  s2.id=102;  
		  s2.name="Payel";  
		  //Printing data  
		  System.out.println(s1.id+"    "+s1.name);  
		  System.out.println(s2.id+"    "+s2.name);  
     }  
}  