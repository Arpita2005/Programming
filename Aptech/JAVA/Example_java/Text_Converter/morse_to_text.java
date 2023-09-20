package Text_Converter;
import java.util.*;
public class morse_to_text
{
    public morse_to_text()
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
        char[] mi=input.split(" ");
        for(int i=0;i<mi.length;i++)
        {
            //either input in character array or input in string and convert every charecters into char array
            //then compare their index
            // for(int j = 0;j<m.length; j++)
            // {
                // j=i;
                if(mi[i]==m[i])
                {
                    System.out.print(m[i]);
                    // break;
                }
                // else
                // {
                //     System.out.println("Wrong Input \n");
                // }
            // }
        }
    }
    public static void main(String[] args) {
        new morse_to_text();
    }
}


