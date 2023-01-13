class Shape 
{
   private int length;
   private int breadth;
   // default Constructor
   Shape() 
   {
      length = 0;
      breadth = 0;
   }
   // Parameterized Constructor
   Shape(int len, int bdth) 
   {
      length = len;
      breadth = bdth;
   }
   void showattributes() 
   {
      System.out.println("length : " + length);
      System.out.println("breadth : " + breadth);
   } 
}

// A subclass which extends for shape
class Rectangle extends Shape 
{
   private String type;
   /* default Constructor
   */
   Rectangle() 
   {
      type = null;
   }
   // Parameterized Constructor
   Rectangle(String ty, int len, int bdth) 
   {
     super(len,bdth);
     type = ty;
   }
   void showattributes() 
   {
      // showattributes() of class Shape is called
      super.showattributes(); 
      System.out.println("type : " + type);
   }
}

public class Test3 
{
   public static void main(String args[]) 
   {
       Rectangle rect = new Rectangle("Blue",5,7);
       // showattributes() in rectangle is called
       rect.showattributes(); 
   }
}