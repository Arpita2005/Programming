class OperatorExample8
{  
  public static void main(String args[])
  {  
     //For positive number, >> and >>> works same  
     System.out.println(20>>2);  
     System.out.println(20>>>2);  
     //For nagative number, >>> changes parity bit (MSB) to 0  
     System.out.println(-20>>2);  
     System.out.println(-20>>>2);  
   }
}  