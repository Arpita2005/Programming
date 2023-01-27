class Calculation
{  
   public void fact(int n)
    {  
		int f=1;
		
		for(int i=1;i<=n;i++)
		     f=f*i; // f*=i 
		 
        System.out.println("Factorial is "+f);		  
    }

    public static void main(String[] args) {
        /*Calculation c1=new Calculation();
		   c1.fact(5);*/
        new Calculation().fact(5);
        //calling method with anonymous object
    }
}  