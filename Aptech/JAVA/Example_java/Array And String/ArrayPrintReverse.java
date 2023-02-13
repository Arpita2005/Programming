public class ArrayPrintReverse
{
   public static void main(String args[])
   {
       System.out.println(" Print Array :  \n ");       
	   printArray(new int[]{3, 1, 2, 6, 4, 2});	 
	   
	   int[] x={18,42,98,55,72}; // Array initialization	   
	   int[] y=new int[x.length];// Array Declaration	   
	   y=reverse(x);
	   System.out.println(" \nOriginal Array :   \n");
	   printArray(x);	
	   System.out.println(" \nReverse Array :   \n");
	   printArray(y);	 
   }
   
   public static void printArray(int[] array) 
   {
		for(int i = 0; i < array.length; i++) 
		{
			System.out.print(array[i] + " ");
		}
   }
   
   public static int[] reverse(int[] list) 
   {
		int[] result = new int[list.length];
		int i,j;
		for (i = 0,j = result.length - 1;i < list.length;i++,j--)
		{
			result[j] = list[i];
		}
		return result;
   }
}



