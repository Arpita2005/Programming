package StringBuilder;

import java.util.Scanner;

public class Delete {

	public static void main(String[] args) 
	{
		String input,ins;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the input :\n");
		input=sc.nextLine();
		//StringBuilder ssb = new StringBuilder(input);
		StringBuffer ssb=new StringBuffer(input);
		ssb.delete(1,3);
		System.out.println("The Output is :\n");
		System.out.println(ssb);	


	}

}
