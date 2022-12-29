class OperatorExample11
{  
   public static void main(String args[])
   {  
		int a=10;  
		int b=5;  
		int c=20;  
		System.out.println(a>b||a<c);//true || true = true  
		System.out.println(a>b|a<c);//true | true = true  
		//|| vs |  
		System.out.println(a>b||a++<c);//true || true = true  
		System.out.println(a);//10 because Arithmetic operators in second condition is not checked in case of logical operators  
		System.out.println(a>b|a++<c);//true | true = true  
		System.out.println(a);//11 because Arithmetic operators in second condition is checked in case of bitwise operators    
    }
}  