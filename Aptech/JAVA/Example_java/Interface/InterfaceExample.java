import java.io.*;
// Multilevel inheritance of Interface
interface IF1
{
	void m1();
}
interface IF2 extends IF1
{
	void m2();
}
interface IF3 extends IF2
{
	void m3();
}
class myClass implements IF3
{
	public void m1()
	{
		System.out.println("It is implementing m1().");
	}
	public void m2()
	{
		System.out.println("It is implementing m2().");
	}

	public void m3()
	{
		System.out.println("It is implementing m3().");
	}
}
class InterfaceExample
{
	public static void main(String args[])
	{
		myClass ob=new myClass();
		System.out.println();
		ob.m1();
		System.out.println();
		ob.m2();
		System.out.println();
		ob.m3();
	}
}

