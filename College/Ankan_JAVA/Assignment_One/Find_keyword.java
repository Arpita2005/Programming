import java.util.Scanner;

public class Find_keyword {
    public static void main(String[] args)
    {
        String inputString, keyString;
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the String ");
        inputString = input.nextLine();
        System.out.println("Enter the keyword");
        keyString = input.nextLine();
        if (inputString.contains(keyString))
        {
            System.out.println("Keyword is found :  " + keyString);
        } else
        {
            System.out.println("Keyword not found \n");
        }
        input.close();
    }
}
