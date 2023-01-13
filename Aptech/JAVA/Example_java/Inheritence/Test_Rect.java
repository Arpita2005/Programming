class Shape 
{
   private int length;
   private int breadth;   
   public int getBreadth() 
   {
      return breadth;
   }
   public int getLength() 
   {
       return length;
   }
   public void setBreadth(int i) 
   {
      breadth = i;
   }
   public void setLength(int i) 
   {
      length = i;
   }
   // default Constructor
   Shape() 
   {
      length = 0;
      breadth = 0;
      System.out.println("Inside default constructor of Shape ");
   }
   // Parameterized Constructor
   Shape(int len, int bdth) 
   {
       length = len;
       breadth = bdth;
       System.out.println("Inside constructor of Shape ");
       System.out.println("length : " + length);
       System.out.println("breadth : " + breadth);
    }
}
// A subclass which extends for shape
class Rectangle extends Shape 
{
   private String type;
   // default Constructor
   Rectangle() 
   {
      super();
      type = null;
      System.out.println("Inside default constructor of rectangle ");
   }
    // Parameterized Constructor
    Rectangle(String ty, int len, int bdth) 
	{
       super(len, bdth);
       System.out.println("Inside constructor of rectangle ");
       System.out.println("length : " + len);
       System.out.println("breadth : " + bdth);
       System.out.println("type : " + type);
    } 
    public String getType() 
	{
       return type;
    }
    public void setType(String string) 
	{
       type = string;
    }
}
// A subclass which extends for rectangle
class ColoredRectangle extends Rectangle 
{
    private String color;
    /* default Constructor*/
    ColoredRectangle() 
	{
       super();
       color = null;
       System.out.println("Inside default constructor of coloredRectangle");
    }
     // Parameterized Constructor
     ColoredRectangle(String c, String ty, int len, int bdth) 
	 {
       super (ty, len, bdth);
       System.out.println("Inside constructor of coloredRectangle ");
       System.out.println("length : " + len);
       System.out.println("breadth : " + bdth);
       System.out.println("type : " + ty);
	   System.out.println("color : " + c);  
     }
     public String getColor() 
	 {
         return color;
     }
     public void setColor(String str) 
	 {
        color = str;
     }
}

public class Test_Rect 
{
   public static void main(String args[]) 
   {
       ColoredRectangle CR = new ColoredRectangle();
	   System.out.println();
       ColoredRectangle CR2 = new ColoredRectangle("Red","Big", 5, 2 );
   }
}
