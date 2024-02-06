//8.	Write a Java program to find the key word from the input sentence. The key word will be user input.

import java.util.Scanner;
public class eight 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String input,key;
        System.out.println("Enter the String ");   
        input=sc.nextLine();
        System.out.println("Enter the key :\n");
        key=sc.nextLine();
       if(input.contains(key))
       {
        System.out.println("Key is found\n");
       }
       else
       {
        System.out.println("Key is not found");
       }
    }   
}
