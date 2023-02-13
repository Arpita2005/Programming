import java.io.*;
public class StringMethodsDemo
{
	public static void main(String args[]) throws Exception
	{
		String s1="Hello World",s2="hello World",s3=" Earth ";
		StringBuffer sb1=new StringBuffer("Hello World");
		StringBuffer sb2=new StringBuffer("HELLO");
		StringBuilder sb3=new StringBuilder("Aptech");
		StringBuilder sb4=new StringBuilder();
		String s4="Hello";
		String s5=new String("Aptech Computer Education");
		char[] charArr={'H','E','L','L','O','.'};
		byte[] byteArr={65,66,67,68,69,70};
		String sByte=new String(byteArr);
		byte[] x=s4.getBytes();
		char[] dst=new char[4];
		//  void getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)
        //Copies characters from this string into the destination character array.
		// src=source       dst=destination 
       		
		//  character at a particular index
		System.out.println(s1.charAt(6));
		// Compare to method
		System.out.println(s1.compareTo(s2));
		System.out.println(s1.compareToIgnoreCase(s2));
		System.out.println(s1.concat(s3));
		// Stringobject.contentEquals(StringBuffer object)
	    System.out.println(s1.contentEquals(sb1));
		//static String CopyValueOf(char[] x)  
		// CopyValueOf is the static method which returns String and takes character array argument.
		System.out.println(s2.copyValueOf(charArr));
        System.out.println("Hello World ends with d= "+s1.endsWith("d"));		
		System.out.println("Hello World starts with s= "+s1.startsWith("s"));
		System.out.println("s1=s2  := "+s1.equals(s2));
		System.out.println("s1=s2 ignoring case  := "+s1.equalsIgnoreCase(s2));
		System.out.println("Byte to String=  "+sByte);		
		System.out.println("String to Byte array =  "+x);
		try
		{
			s5.getChars(6,10,dst,0);
			System.out.println("String to character array =  "+dst);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		System.out.println("First occurence of e in s5= "+s5.indexOf('e'));
		//int indexOf(int ch, int fromIndex)
		//Returns the index within this string of the first occurrence of the specified character,
		//starting the search at the specified index.
		System.out.println("First occurence of t in s5= "+s5.indexOf('t',6));
		System.out.println("Last occurence of t in s5= "+s5.lastIndexOf('t'));
		System.out.println("The length of s1= "+s1.length());
		System.out.println("The replace of s1= "+s1.replace('l','w'));
        System.out.println("The replace of s1= "+s1.replaceAll("Hello","Hi"));
		System.out.println(" Split of Hello World");
		String[] str=s1.split(" ");
		for(int i=0;i<str.length;i++)
			System.out.println(str[i]);	
		System.out.println(" Substring of Hello World");
		System.out.println(s1.substring(6));
		System.out.println(" Substring of Hello World");
		System.out.println(s1.substring(6,8));
		System.out.println(" Small letter of Hello World");
		System.out.println(s1.toLowerCase());
		System.out.println(" Capital letter  of Hello World");
		System.out.println(s1.toUpperCase());
		String s6="th Independence Day ";
		int i=70;
		String s7=i+s6;
		System.out.println(s7.toString());
		String s8="   Hi World  ";
		System.out.println("Trimmed String="+s8.trim());
		System.out.println(s1.valueOf(s2));
		System.out.println(sb3.append(" Computers "));
		System.out.println(sb3.insert(17,"Education"));
	}

}