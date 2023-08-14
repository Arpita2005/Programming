package Text_Converter;
import java.util.Scanner;
class text
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
        input=in.next();
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

public class Main
{
    public static void main(String[] args)
    {
        while(true)
        {
            Scanner sc= new Scanner(System.in);
            int ch;
            System.out.println("What Do You Want to Do \n1. Morse Code to Text\n2. Text to Morse Code\n");
            ch=sc.nextInt();
            if(ch==1)
            {

            } else if (ch==2)
            {

            }
            else
            {
                System.out.println("Choose the correct option \n");
            }
        }
    }
}
