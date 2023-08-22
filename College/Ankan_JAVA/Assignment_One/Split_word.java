import java.util.Scanner;

public class Split_word
{
    public static void main(String[] args)
    {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Please enter a sentence:");
            String input = scanner.nextLine();
            
            String[] words = input.split(" ");
            
            System.out.println("Words in the sentence:");
            for (int i = 0; i < words.length; i++)
            {
                System.out.println(words[i]);
            }
        }
    }
}