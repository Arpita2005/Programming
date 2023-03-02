import java.io.*;
import java.util.Scanner;

public class create_new_fileandwrite
{
    public static void main(String[] args) throws IOException
    {
        try
        {
            FileOutputStream fp = new FileOutputStream("first.txt");
            Scanner sc1 = new Scanner(System.in);
            String input;
            System.out.println("Enter Your Input :\n");
            input = sc1.nextLine();
            byte arr[] = input.getBytes();
            fp.write(arr);
            fp.close();
        }
        catch(Exception e)
        {
            System.out.println("There is some error. Your Input Have not Included in this file");
        }
    }
}
