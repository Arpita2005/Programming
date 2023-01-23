// A simple constructor.
class mmyClass
{
   int x;
   // Following is the constructor
   mmyClass()
   {
      x = 10;
   }
}
public class ConsDemo 
{
   public static void main(String args[]) 
   {
      mmyClass t1 = new mmyClass();
      mmyClass t2 = new mmyClass();
      System.out.println(t1.x + " " + t2.x);
   }
}
