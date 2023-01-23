class calculation
{  
	 void fact(int n)
	 {  
		  int fact=1;  
		  for(int i=1;i<=n;i++)
		  {  
		      fact=fact*i;  
			  //fact*=i;
	      }  
	  System.out.println("factorial is "+fact);  
	 }  
	 public static void main(String args[])
	 {  
		new calculation().fact(5);
		   //calling method with anonymous object  
	 }  
}  