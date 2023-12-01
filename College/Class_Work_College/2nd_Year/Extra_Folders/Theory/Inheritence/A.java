package Inheritence;

public class A 
{
	protected int x;
	protected int y;
	
	public A()
	{
		System.out.println("Constructor A is being called....\n");
		 x=10;
		 y=5;
	}
	public void show_details()
	{
		System.out.println("The value of x is :"+this.x);
		System.out.println("The value of y is :"+this.y);
	}
	
}
