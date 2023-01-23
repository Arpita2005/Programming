class Domestic_Animal
{  
		void eat()
		{
			System.out.println("eating...");
		}  
}  
class ddog extends Domestic_Animal
{  
		void bark()
		{
			System.out.println("barking...");
		}  
}  
class BabyDog extends ddog
{  
		void weep()
		{
			System.out.println("weeping...");
		}  
}  
class TestInheritance2
{  
	public static void main(String args[])
	{  
		BabyDog d=new BabyDog();  
		d.weep();  
		d.bark();  
		d.eat();  
	}
}  