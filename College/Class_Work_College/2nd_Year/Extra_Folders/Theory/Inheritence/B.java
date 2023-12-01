package Inheritence;

public class B extends A {
	
	private int z;
	
	public B()
	{
		System.out.println("COnstructor B is being called....\n");
		z=10;
		x=40;
	}
	public void show_details()
	{
//		System.out.println("The value of x is :"+x);
//		System.out.println("The value of y is :"+y);
		super.show_details();
		System.out.println("The value of z is :"+z);
	}
}
