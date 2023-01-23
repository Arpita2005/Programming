class AA
{  
	void msg()
	{
		System.out.println("Hello");
	}  
}  
class BB
{
	void msg()
	{
		System.out.println("Welcome");
	}  
}  
class C extends AA //,BB
{//suppose if it were  
   
     public static void main(String args[])
     {  
       C obj=new C();  
       obj.msg();//Now which msg() method would be invoked?  
	 }  
}  