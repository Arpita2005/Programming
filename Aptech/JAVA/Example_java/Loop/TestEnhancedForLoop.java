public class TestEnhancedForLoop 
{
   public static void main(String args[]) 
   {
      int [] numbers = {10, 20, 30, 40, 50};
	  System.out.println("Numbers :");
	  for(int x : numbers ) 
	  {
         System.out.print( x );
         System.out.print(",");
      }
      System.out.print("\n");
      String [] names = {"James", "Larry", "Tom", "Lacy"};
      System.out.println("Names  :");
      for( String name : names ) 
	  {
         System.out.print( name );
         System.out.print(",");
      }
   }
}

