import java.util.*;

public class CalcPower
{
   public static void main(String args[])
   {
	
      Scanner sc=new Scanner(System.in);
      double b,p,r;
      System.out.println("Enter the base ");
      b=sc.nextDouble();
      System.out.println("Enter the power ");
      p=sc.nextDouble();
      r=powerFunc(b,p);
      System.out.println("The result:=   "+r);

   }
   public static double powerFunc(double base,double power)
   {        
       double r,p;
       if(power==0.0)
         r=1.0;             
       else if(power<0.0)
       {
          p=-power;
          r=(double)(1/(double)(base*powerFunc(base,p-1))); 
          
       } 
        else 	 	  
         r=base*powerFunc(base,power-1); 
       return r; 

   }
}
			