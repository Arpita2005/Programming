//Variable Arguments(var-args)
public class VarargsDemo 
{
   public static void main(String args[]) 
   {
      // Call method with variable args  
	   printMax(new double[]{34, 3, 3, 2, 56.5,98.4,76.2,16.4});
      printMax(new double[]{1, 2, 3,4,5,8.4,7});
      //printMax(new double[]{});
   }

   public static void printMax(double[] numbers) 
   {
      if (numbers.length == 0) 
	  {
         System.out.println("No argument passed");
         return;
      }

      double result = numbers[0];

      for (int i = 1; i <  numbers.length; i++)      
	  {
	    if (numbers[i] >  result)
             result = numbers[i];
	  }
      System.out.println("The max value is " + result);
      
   }
 }