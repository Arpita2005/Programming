// Nested interface Showable - outer interface , Message - inner interface 
interface presentation
{  
	  void show();  
	  interface Message
	  {  
		  void msg();  
      }  
	  interface Message2
	  {  
		  void msg1();  
      }  
}  
class TestNestedInterface1 implements presentation.Message,presentation.Message2
{  
	 public void msg()
	 {
		 System.out.println("Hello nested interface");
	 }  
     public void msg1()
	 {
		 System.out.println("Hello nested interface 2");
	 }  	 
     public static void main(String args[])
     {  
	     TestNestedInterface1 message=new TestNestedInterface1();//upcasting here 
	     message.msg(); 
		 message.msg1(); 		 
     }  
}  