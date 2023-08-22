import java.util.*;

public class split_word 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
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
