class shape
{
   private int length;
   private int breadth;
   // default Constructor
   shape()
   {
      length = 0;
      breadth = 0;
   }
   // Parameterized Constructor
   shape(int len, int bdth)
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
class rectangle extends shape
{
   private String type;
   /* default Constructor
   */
   rectangle()
   {
      type = null;
   }
   // Parameterized Constructor
   rectangle(String ty, int len, int bdth)
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
       rectangle rect = new rectangle("Blue",5,7);
       // showattributes() in rectangle is called
       rect.showattributes(); 
   }
}