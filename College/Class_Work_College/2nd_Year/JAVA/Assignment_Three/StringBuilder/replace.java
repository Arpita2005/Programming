package StringBuilder;

import java.util.Scanner;

public class replace {

	public static void main(String[] args) 
	{
		String input,ins;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the input :\n");
		input=sc.nextLine();
		System.out.println("Enter the input for replace :\n");
		ins=sc.nextLine();
		StringBuilder ssb = new StringBuilder(input);
		ssb.replace(2,4,ins);
		System.out.println("The Output is :\n");
		System.out.println(ssb);	

	}

}
