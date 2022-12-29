public class Typecasting1
{
    public static void main(String[] args)
    {
      int i = 100;	
      long l = i;	//no explicit type casting required  
      float f = l;	//no explicit type casting required  
	  float f1=90.876f;
      System.out.println("Int value "+i);
      System.out.println("Long value "+l);
      System.out.println("Float value "+f);
	  System.out.printf("\nFloat value %.2f",f);
	  System.out.printf("\nFloat value %.2f\n",f1);
    }
    
}