class Animals
{  
	void eat()
	{
		System.out.println("eating...");
	}  
}  
class Dogs extends Animals
{  
	void bark()
	{
		System.out.println("barking...");
	}  
}  
class Cat extends Animals
{  
	void meow()
	{
		System.out.println("meowing...");
	}  
}  
class TestInheritance3
{  
	public static void main(String args[])
	{  
		Cat c=new Cat();  
		c.meow();  
		c.eat();  
		Dogs d=new Dogs();
		d.bark();
		d.eat();
		//c.bark();//C.T.Error  
	}
}  