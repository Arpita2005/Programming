    class A
	{  
		int data=50;//instance variable  
		static int m=100;//static variable  
		
		void method()// instace method 
		{  
			int n=90;//local variable 
			System.out.println(n);
		}  
		public static void main(String args[])
		{
		   A x=new A();
		   System.out.println(m); //no need to call static variable with object name
		   System.out.println(x.data);
		   x.method();
		}
    }//end of class  