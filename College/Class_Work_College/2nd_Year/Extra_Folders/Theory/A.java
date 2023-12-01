
public class A {

	protected int x;
	protected int y;
	
	
	 public A() { 
		 System.out.println("Class A constructor executing...");
		 x=1; 
		 y=1; }
	 
	public void showdetails() {
		
		System.out.println("The value of x :"+this.x);
		System.out.println("The value of y :"+this.y);
		
	}
	
	
	
}
