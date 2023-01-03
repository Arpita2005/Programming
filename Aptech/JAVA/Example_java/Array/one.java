import java.io.*;
import java.util.Scanner;
public class one 
{
    public static void main(String args[])
    { 
        {
        Scanner sc=new Scanner(System.in);
        int input;
        int[] arr=new int[100];
        System.out.println("Enter the size of array:\n");
        input=sc.nextInt();
        System.out.println("Enter the elements:\n");
        for(int i=0;i<input;i++)
        {
        System.out.println("Element "+(i+1));
        arr[i]=sc.nextInt();
        }
        System.out.println("The elements are:\n");
        for(int i=0;i<input;i++)
        {
        System.out.println(arr[i]);
        }
    }
        
    }
}

