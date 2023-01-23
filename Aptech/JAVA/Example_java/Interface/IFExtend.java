import java.io.*;
// inheritance of interface 
interface AIF
{
	void meth1();
	void meth2();
}

interface BIF extends AIF
{
	void meth3();
}

class MyClass implements BIF
{
	public void meth1()
	{
		System.out.println("It is implementing meth1().");
	}

	public void meth2()
	{
		System.out.println("It is implementing meth2().");
	}

	public void meth3()
	{
		System.out.println("It is implementing meth3().");
	}
}

class IFExtend
{
	public static void main(String args[])
	{
		MyClass ob=new MyClass();
		System.out.println();
		ob.meth1();
		System.out.println();
		ob.meth2();
		System.out.println();
		ob.meth3();
	}
}

