//Write a java program to input 10 numbers in an array and find maximum and minimum number.
import java.io.*;
import java.util.Scanner;
public class fourth
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        int input,sum=0;
        int[] arr=new int[100];
        int max=arr[0],min=arr[0];
        System.out.println("Enter the size of array:\n");
        input=sc.nextInt();
        System.out.println(".............................\n");
        System.out.println("Enter the elements:\n");
        for(int i=0;i<input;i++)
        {
        System.out.println("Element "+(i+1));
        arr[i]=sc.nextInt();
        }
        System.out.println(".............................\n");
        System.out.println("The elements are:\n");
        for(int i=0;i<input;i++)
        {
        System.out.println(arr[i]);
        }
        System.out.println("=========================");
    }
}
