    class OperatorExample15
	{  
		public static void main(String args[])
		{  
			short a=10;  
			short b=10;  
			a+=b;//a=a+b internally so fine   
            System.out.println(a);  			
			a=(short)(a+b);// 20+10=30 now int  
			System.out.println(a);
            //a=a+b;	Compile time error because 30+10=40 now int  
            //System.out.println(a);			
		}
	}  