/*Java Program To Find Number Of Characters, Words And Lines In A File : */
//import java.io.*;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class WordCountInFile   
{    
	public static void main(String[] args)  //throws IOException
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
                
                lineCount++;    //Updating the lineCount

                /* Getting number of words in currentLine */
                String[] words = currentLine.split(" ");
               
                wordCount =  wordCount + words.length;   //Updating the wordCount
                //Iterating each word
                for (String word : words)
                {
                    charCount = charCount + word.length();   //Updating the charCount
                }
                
                currentLine = reader.readLine();   //Reading next line into currentLine
            }

            //Printing charCount, wordCount and lineCount
            System.out.println("Number Of Chars In A File : "+charCount);
            System.out.println("Number Of Words In A File : "+wordCount);
            System.out.println("Number Of Lines In A File : "+lineCount);
            reader.close();
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }
       
        // finally
        // {
        //     try
        //     {
        //         reader.close();           
		// 		//Closing the reader
        //     }
        //     catch (IOException e) 
        //     {
        //         e.printStackTrace();
        //     }
        // }
    }   
}