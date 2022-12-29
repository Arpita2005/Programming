    class OperatorExample16
	{  
		public static void main(String args[])
		{  
			short a=10;  
			short b=10; 		
			int c=a+b;
			//If we add two or short data it will by default converted to int  
			System.out.println(c);  
			long d=a+b;
			System.out.println(d); 
			/* Two short integers automatically converted to int when added
			and we know int is automatically converted to long */
		}
	}  