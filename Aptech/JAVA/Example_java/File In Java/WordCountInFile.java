/*Java Program To Find Number Of Characters, Words And Lines In A File : */

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class WordCountInFile   
{    
	public static void main(String[] args) 
    {
        BufferedReader reader = null;   
        //Initializing charCount, wordCount and lineCount to 0 
        int charCount = 0,wordCount = 0,lineCount = 0;
        try
        {
            //Creating BufferedReader object      
            reader = new BufferedReader(new FileReader("E:\\sample.txt")); 
            //Reading the first line into currentLine 
            String currentLine = reader.readLine(); 
            while (currentLine != null)
            {
                //Updating the lineCount
                lineCount++;
                //Getting number of words in currentLine
                String[] words = currentLine.split(" ");
                //Updating the wordCount
                wordCount = wordCount + words.length;
                //Iterating each word
                for (String word : words)
                {
                    //Updating the charCount
                     
                    charCount = charCount + word.length();
                }
                //Reading next line into currentLine
                currentLine = reader.readLine();
            }
            //Printing charCount, wordCount and lineCount
            System.out.println("Number Of Chars In A File : "+charCount);
            System.out.println("Number Of Words In A File : "+wordCount);
            System.out.println("Number Of Lines In A File : "+lineCount);
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }
        finally
        {
            try
            {
                reader.close();           
				//Closing the reader
            }
            catch (IOException e) 
            {
                e.printStackTrace();
            }
        }
    }   
}