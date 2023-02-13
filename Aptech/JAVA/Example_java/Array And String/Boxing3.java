class Boxing3
{  
  static void m(Integer i)
  {
	  System.out.println("Integer");
  }  
  static void m(Integer... i)
  {
	  System.out.println("Integer...");
  }  
  
  public static void main(String args[])
  {  
     int a=30;  
     m(a);  
  }   
}  