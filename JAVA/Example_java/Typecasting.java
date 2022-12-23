public class Typecasting
{
    public static void main(String[] args)
    {
      double d = 100.04;  
      long l = (long)d;  //Explicit type casting required  
      int i = (int)l;	//Explicit type casting required        
      System.out.println("Double value "+d);
      System.out.println("Long value "+l);
      System.out.println("Int value "+i);     
    }    
}