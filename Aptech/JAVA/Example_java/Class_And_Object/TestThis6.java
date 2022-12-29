class A1
{  
	A1()
	{
		System.out.println("hello a");
	}  
	A1(int x)
	{  
		this();  
		System.out.println(x);  
	}  
	A1(int x,int y)
	{  
		this(x);  
		System.out.println(y);  
	}  
	
}  
class TestThis6
{  
	public static void main(String args[])
	{  
			A1 a=new A1(10,20);  
    }
}  