package Text_Converter;
import java.util.Scanner;
public class text_to_morse
{
    public void text_morse()
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
        System.out.println("Enter Your Input :\n");
        input=in.next();
        String[] mi=input.split(" ");
        for(int i=0;i<input.length();i++)
        {
            for(int j = 0;j<alpha.length; j++)
            {
                if(mi[j].equals(alpha[j]))
                {
                    System.out.println(m[j]);
                }
            }
        }
    }
}
