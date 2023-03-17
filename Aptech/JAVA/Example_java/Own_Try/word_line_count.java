import java.io.*;
import java.util.Scanner;
public class word_line_count
{
    public static void main(String[] args) throws IOException
    {
        int line=0,words=0,letter=0;
        Scanner input= new Scanner(new File("One.txt"));
       while(input.hasNextLine())
        {
            input.nextLine();
            line++;
            String word[]=input.nextLine().split(" ");
            {
                words=words+word.length;

                for(String a:word)
                {
                    letter=letter+a.length();
                }
            }
        }
        System.out.println("Number of letters in this file = "+letter);
        System.out.println("Number of words in this file ="+words);
        System.out.println("Number of lines in file = :"+line);
        input.close();
    }
}
