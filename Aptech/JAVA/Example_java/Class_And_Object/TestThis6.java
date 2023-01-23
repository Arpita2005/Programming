class A23
{  
	A23()
	{
		System.out.println("hello a");
	}  
	A23(int x)
	{  
		this();  
		System.out.println(x);  
	}  
	A23(int x,int y)
	{  
		this(x);  
		System.out.println(y);  
	}  
	
}  
class TestThis6
{  
	public static void main(String args[])
	{  
			A23 a=new A23(10,20);
    }
}  