package Text_Converter;
import java.util.*;
public class morse_to_text
{
    public void morse_to_text()
    {
        Scanner in=new Scanner(System.in);
        char[] alpha={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
        String[] m={ ".-",   "-...", "-.-.", "-..",  ".",
                "..-.", "--.",  "....", "..",   ".---",
                "-.-",  ".-..", "--",   "-.",   "---",
                ".--.", "--.-", ".-.",  "...",  "-",
                "..-",  "...-", ".--",  "-..-", "-.--",
                "--..", "|" };
        String input;
        System.out.println("Enter Your Morse Code :\n");
        input=in.nextLine();
        String[] mi=input.split(" ");
        for(int i=0;i<input.length();i++)
        {
            for(int j = 0;j<m.length; j++)
            {
                if(mi[j].equals(m[j]))
                {
                    System.out.println(alpha[j]);
                }
            }
        }
    }
}

