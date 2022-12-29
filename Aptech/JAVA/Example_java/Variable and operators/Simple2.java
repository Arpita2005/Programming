    class Simple2
	{  
		public static void main(String[] args)
		{  
			float f=10.5f;  
			//int a=f;     //Compile time error  
			int a=(int)f;  // Explicit Type Conversion
			System.out.println("The value is = "+f);  
			System.out.println(a);  
        }
   }  