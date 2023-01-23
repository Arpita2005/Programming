interface Inter
{
	void m1();
	float pi=3.14f;
}
interface Inter1
{
	void m2();
}
class ImpInter implements Inter,Inter1
{
	public void m1()
	{
		System.out.println("Pi="+pi);
	}
	public void m2()
	{
		System.out.println("Hello");
	}
}
class TestInterface
{
	public static void main(String[] cmc)
	{
		ImpInter obj=new ImpInter();
		obj.m1();
		obj.m2();
	}
}