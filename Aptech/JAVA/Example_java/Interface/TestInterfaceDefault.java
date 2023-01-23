interface art
{  
	void draw();  
	default void msg()
	{
		System.out.println("default method");
	}  
}  
class R implements art
{  
	public void draw(){System.out.println("drawing rectangle");} 
}  
class TestInterfaceDefault
{  
	public static void main(String args[])
	{  
		R d=new R();
		d.draw();  
		d.msg();  
    }
}  