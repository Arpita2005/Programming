import java.util.*;
   public class fibo1 
   {   
	  public static void fibo(int f1,int f2,int count)
      {     
		  int f3;  
	      while(count>0)
		  {      
			    System.out.print(f1+"   ");
	            f3=f1+f2;
                f1=f2;
                f2=f3;	
                count--;					
	 	  } 
      }			 
	     
	  public static void main(String args[])
	  {  
	     int n;
		 Scanner sc=new Scanner(System.in);
		 System.out.println("Enter the limit: ");
		 n=sc.nextInt();    
	     fibo(0,1,n);     
	 }  
}
