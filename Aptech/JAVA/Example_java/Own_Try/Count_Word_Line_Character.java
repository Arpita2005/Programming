import java.io.*;

public class Count_Word_Line_Character
{
    public static void main(String[] args) {
        file_data_count();
    }   
    static void file_data_count()
    {
        BufferedReader reader = null;
        int charCount = 0;
        int wordCount = 0;
        int lineCount = 0;
        try
        {
            reader = new BufferedReader(new FileReader("Laptop.txt"));
            String currentLine = reader.readLine();
            while (currentLine != null)
            {
                lineCount++;
                String[] words = currentLine.split(" ");
                wordCount = wordCount + words.length;
                 
                for (String word : words)
                {
                    charCount = charCount + word.length();
                }
                 currentLine = reader.readLine();
            }
             System.out.println("Number of character in file : "+charCount);
             System.out.println("Number of words in a file : "+wordCount);
             System.out.println("Number of lines in file : "+lineCount);
        }
        catch (IOException e)
        {
            System.out.println("1st Exception is "+e);
        }
        finally
        {
            try
            {
                reader.close();          
            }
            catch (IOException e)
            {
                System.out.println("2nd Exception is "+e);
            }
        }
    }
}