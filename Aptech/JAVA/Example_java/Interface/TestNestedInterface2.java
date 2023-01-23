class A3
{  
  interface Message
  {  
      void msg();  
  }  
}  
  
class TestNestedInterface2 implements A3.Message
{  
      public void msg()
	  {
		  System.out.println("Hello nested interface");
	  }  
       
      public static void main(String args[])
	  {  
		  TestNestedInterface2 message=new TestNestedInterface2();//upcasting here  
		  message.msg();  
      }  
}  