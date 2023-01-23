interface Drawable
{  
	void draw();  
	static int cube(int x)
	{
		return x*x*x;
	}  
}  
class RS implements Drawable
{  
	public void draw()
	{
		System.out.println("drawing rectangle");
	}  
}  
  
class TestInterfaceStatic
{  
	public static void main(String args[])
	{  
		Drawable d=new RS();
		d.draw();  
		System.out.println(Drawable.cube(3));  
    }
}  