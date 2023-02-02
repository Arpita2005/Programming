public class TestMultipleCatchBlock
{  
    public static void main(String args[])
	{  
	   try
	   {  
			int a[]=new int[5]; 
			int b=25/0;
			a[5]=100;	
	   }       
catch(ArrayIndexOutOfBoundsException e){System.out.println("task 2 completed");}  
	   catch(ArithmeticException e){System.out.println("task1 is completed");} 
	   catch(Exception e){System.out.println("common task completed");} 
    
  
	   System.out.println("rest of the code...");  
    }  
}  