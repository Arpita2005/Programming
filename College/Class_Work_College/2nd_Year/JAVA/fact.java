import java.util.*;
class one
{
    public static void fact()
    {
        int num,mul=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number :\n");
        num=sc.nextInt();
        for(int i=num;i>1;i--)
        {
            mul=mul*i;
        }
        System.out.println("The Factorial is :"+mul);
    }
    public static void main(String[] args) 
    {
        fact();   
    }

}

// import java.util.*;
// import java.io.*;

//  public class fact
// {
//     public static void main(String[] args)
//     {
//     int num,fact=1;
   
//     Scanner sc = new Scanner(System.in);
//     System.out.println("Please enter a number : ");
//     num=sc.nextInt();
//      for(i=1;i<=num;i++)
//      {
//      fact=fact*i;
//     }
     
// System.out.println("The factorial of"+num+"is"+fact);
// }
// }