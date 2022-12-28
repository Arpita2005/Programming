// A simple constructor.
class MyClass1 
{
   int x;   
    // Following is the constructor
    MyClass1(int i) 
    {
        x = i;
    }
}
public class ConsDemo1 
{
   public static void main(String args[]) 
   {
      MyClass1 t1 = new MyClass1(10);
      MyClass1 t2 = new MyClass1(20);
      System.out.println(t1.x + " " + t2.x);
   }
}
