import java.io.*;

public class ArrayDemo
{
	public static void main(String[] args)
	{
	    int i;
		int[] a={11,34,87,91,52};
		int b[]=new int[10];
		// Initialize array b
		for(i=0;i<b.length;i++)
		    b[i]=i+5;
		System.out.println("Print 1st Array:   ");
		printArray(a);
		System.out.println("Print 2nd Array:   ");
		printArray(b);
	
	}
	public static void printArray(int a[])
	{
	    int i;
		for(i=0;i<a.length;i++)
		   System.out.print(a[i]+"\t");
	    System.out.println();
	}

}