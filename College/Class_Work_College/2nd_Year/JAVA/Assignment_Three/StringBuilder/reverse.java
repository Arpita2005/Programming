package StringBuilder;

import java.util.Scanner;

public class reverse {

	public static void main(String[] args) 
	{	
		String input;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the input :\n");
		input=sc.nextLine();
		StringBuilder ssb = new StringBuilder(input);
		ssb.reverse();
		System.out.println("The Output is :\n");
		System.out.println(ssb);	
	}

}
