import java.io.*;
public class Swapping
{
   public static void main(String args[])
    {
        int a=10;
        int b=20;
    
        swapFunction(a,b);
    }
     public static void swapFunction(int a,int b)
      {
        b=b-a;   
        a=a+b;
		/*
		      Universal law:    
			  a=45   b=23
			  b=a+b
			  a=b-a
			  b=b-a  
        */			  
        System.out.println("a=  "+a+"   b=  "+b);
      }
}
 