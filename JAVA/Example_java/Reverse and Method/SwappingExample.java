//passing parameter by value call by value
public class SwappingExample 
{
   public static void main(String[] args) 
   {
      int a = 30;
      int b = 45;
      System.out.println("Before swapping, a = " + a + " and b = " + b);
      // Invoke the swap method
      swapFunction(a, b);
	  System.out.println("\n**Now, Before and After swapping values will be same here**:");
      System.out.println("After swapping, a = " + a + " and b is " + b); //the value have not swapped because a and b are local variable
      
   }
   public static void swapFunction(int a, int b) 
   {         
      //int c = a;   
      a = b;
      b = a;     
   }
}