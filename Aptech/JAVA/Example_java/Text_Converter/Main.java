package Text_Converter;
import java.util.Scanner;
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
                morse_to_text m=new morse_to_text();
                m.morse_to_text();
            }
            else if (ch==2)
            {
                text_to_morse tm=new text_to_morse();
                tm.text_morse();
            }
            else
            {
                System.out.println("Choose the correct option \n");
            }
        }
    }
}
