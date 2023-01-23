//Interface declaration: by first user  
// Mutiple class implement one interface 
interface DRAW
{  
	void draw();  
}  
//Implementation: by second user  
class Rectangless implements DRAW
{  
	public void draw(){System.out.println("drawing rectangle");}  
}  
class Circle implements DRAW
{  
	public void draw(){System.out.println("drawing circle");}  
}  
//Using interface: by third user  
class TestInterface1
{  
	public static void main(String args[])
	{  
		DRAW d=new Circle();
		//In real scenario, object is provided by method e.g. getDrawable()  
		d.draw(); 
		DRAW d1=new Rectangless();
		//In real scenario, object is provided by method e.g. getDrawable()  
		d1.draw();  
    }
}  