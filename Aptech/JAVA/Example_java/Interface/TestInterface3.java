interface Printer
{  
	void print();  
}  
interface showable
{  
	void print();  
}    
class TestInterface3 implements Printer,showable
{  
	public void print(){System.out.println("Hello");}  
	
	public static void main(String args[])
	{  
		TestInterface3 obj = new TestInterface3();  
		obj.print();  
    }  
}  