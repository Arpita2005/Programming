public class StringFormatDemo
{
	public static void main(String args[])
	{
		int intVar=25;
		float floatVar=90.87f;
		String stringVar="Hello World";
		System.out.printf("\n\nThe value of the float variable is " + "%f, while the value of the integer " + "variable is %d, and the string " + "is %s", floatVar, intVar, stringVar);
					  
		String fs;
		fs = String.format("\n\nThe value of the float variable is " +"%f, while the value of the integer " +  "variable is %d, and the string " +   "is %s", floatVar, intVar, stringVar);
		System.out.println(fs);
	}
}
				  