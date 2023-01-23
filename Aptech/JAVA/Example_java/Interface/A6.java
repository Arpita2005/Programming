//Java Interface Example
//In this example, Printable interface has only one method, its implementation is provided in the A class.
interface printable
{  
  void print();  
}  
class A6 implements printable
{  
  public void print(){System.out.println("Hello");}  
  
  public static void main(String args[])
  {  
		A6 obj = new A6();  
		obj.print();  
  }  
}  