class OperatorExample10
{  
 public static void main(String args[])
 {  
	   int a=10;  
	   int b=5;  
	   int c=20;  
	   System.out.println(a<b && a++<c);//false && true = false  
	   System.out.println(a);
	   //10 because second condition is not checked 
       // i.e in case of logical operator the Arithmetic operators in 
	   // 2nd condition do not work further in the next lines
	   System.out.println(a<b & a++<c);//false & true = false  
	   System.out.println(a);
	   //11 because second condition is checked  
	   // i.e in case of bitwise  operator the Arithmetic operators in 
	   // 2nd condition work in the next lines
  }
}  