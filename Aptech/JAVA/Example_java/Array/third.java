//Write a java program to input 20 numbers in an array and find factorial of each element.
import java.io.*;
import java.util.Scanner;
public class third 
{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        int size,fact=1,k;
        int[] arr=new int[100];
        System.out.println("Enter the size of array:\n");
        size=input.nextInt();
        System.out.println(".............................\n");
        System.out.println("Enter the elements:\n");
        for(int i=0;i<size;i++)
        {
        System.out.println("Element "+(i+1));
        arr[i]=input.nextInt();
        }
        System.out.println(".............................\n");
        System.out.println("The elements are:\n");
        for(int i=0;i<size;i++)
        {
        System.out.println(arr[i]);
        }
        System.out.println("The factorials are:\n");
        for(int i=0;i<size;i++)
        {
            for(k=1;k<=arr[i];k++)
            {
                fact*=k;
            }
            System.out.println(fact);
            fact=1;
        }
       
    }
}
    