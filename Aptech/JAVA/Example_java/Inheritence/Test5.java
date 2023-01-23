
class Size
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
   Size()
   {
      length = 0;
      breadth = 0;
      System.out.println("Inside default constructor of Shape ");
   }

    // Parameterized Constructor
    Size(int len, int bdth)
    {
       length = len;
       breadth = bdth;
       System.out.println("Inside constructor of Shape ");
       System.out.println("length : " + length);
       System.out.println("breadth : " + breadth);
    }
}

// A subclass which extends for shape
class circle extends Size
{
   private String type;

   // default Constructor
   circle()
   {
      super();
      type = null;
      System.out.println("Inside default constructor of rectangle ");
   }

    // Parameterized Constructor
    circle(String ty, int len, int bdth)
	{
       super (len, bdth);
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
class drawrect extends circle
{
    private String color;
    /* default Constructor*/
    drawrect()
	{
       super();
       color = null;
       System.out.println("Inside default constructor of coloredRectangle");
    }

     // Parameterized Constructor
     drawrect(String c, String ty, int len, int bdth)
	 {
       super (ty, len, bdth);
       System.out.println("Inside constructor of coloredRectangle ");
       System.out.println("length : " + len);
       System.out.println("breadth : " + bdth);
       System.out.println("type : " + ty);
     }
     public String getColor() 
	 {
         return color;
     }
     public void setColor(String string) 
	 {
        color = string;
     }
}

public class Test5 
{
   public static void main(String args[]) 
   {
       drawrect CR = new drawrect();
       drawrect CR2 = new drawrect("Red","Big", 5, 2 );
   }
}
