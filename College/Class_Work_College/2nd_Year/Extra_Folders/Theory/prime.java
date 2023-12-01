import java.util.*;
public class prime
{
    public static void main(String[] args) 
    {
       int num,i,flag=0;
       System.out.println("Enter an integer: ");
       Scanner sc=new Scanner(System.in);
       num=sc.nextInt(); 

       if (num == 0 || num == 1)
       flag = 1;
   
        for (i = 2; i <= num / 2; ++i) 
     {
       if (num % i == 0) 
       {
         flag = 1;
         break;
       }
     }
   
     if (flag == 0)
       System.out.println(num+" is a prime number.\n");
     else
       System.out.println(num+" is not a prime number.\n");

    } 
}