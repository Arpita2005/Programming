package StringBuilder;
import java.util.*;
public class insert 
{

	public static void main(String[] args) 
	{
		String input,ins;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first input :\n");
		input=sc.nextLine();
		StringBuilder ssb = new StringBuilder(input);
		System.out.println("Enter the input to insert :\n");
		ins=sc.nextLine();
		ssb.insert(3,ins);
		System.out.println("The Output is :\n");
		System.out.println(ssb);	

	}

}
