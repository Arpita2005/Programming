interface printables
{  
	void print();  
}  
interface Showables extends printables
{  
	void show();  
}

class TestInterface4 implements Showables
{  
	public void print(){System.out.println("Hello");}  
	public void show(){System.out.println("Welcome");}  
  
	public static void main(String args[])
	{
		TestInterface4 obj = new TestInterface4();  
		obj.print();  
		obj.show();  
	}  
}  