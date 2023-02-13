class StringBuilderExample6
{  
	public static void main(String args[])
	{  
		StringBuilder sb=new StringBuilder();  
		System.out.println(sb.capacity());//default 16  
		sb.append("Hello");  
		System.out.println(sb.capacity());//now 16  
		sb.append("Java is my favourite language");  
		System.out.println(sb.capacity());//now (16*2)+2=34 i.e (oldcapacity*2)+2
        sb.append("Android is my favourite technology");  
		System.out.println(sb.capacity());	   // 34*2+2=70	
   }  
}  