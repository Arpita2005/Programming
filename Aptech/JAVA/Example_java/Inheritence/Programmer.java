class Employee01
{  
      float salary=40000;  
}  
class Programmer extends Employee01
{
	
     int bonus=10000;  
	 public static void main(String args[])
	 {  
	    Programmer p=new Programmer();  
	    System.out.println("Programmer total income is:"+(p.salary+p.bonus));  
	    System.out.println("Bonus of Programmer is:"+p.bonus);  
	 }  
}  