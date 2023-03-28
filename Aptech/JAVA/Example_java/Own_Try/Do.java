import java.util.*;
public class Do
{
    public static void main(String[] args)
    {
        while (true)
        {
            String[] sen = {"Hello,How can I assist you today ?\n", "Hi,I am here!!May I help you\n"};
            String[] sen1 = {"Goodbye , Have a great Day\n", "See you later !! Take Care\n"};
            String input;
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter Your Input : [Your Options Are]\n1. Hello\n2. Bye\n3. Goodbye\n4. Bye\n5. Exit");
            input = sc.nextLine();
            if (input.equalsIgnoreCase("Hello"))
            {
                    System.out.println(sen[0]);
            }
            else if(input.equalsIgnoreCase("Hi"))
            {
                System.out.println(sen[1]);
            }
            else if (input.equalsIgnoreCase("Bye"))
            {
                System.out.println(sen1[0]);
            }
            else if(input.equalsIgnoreCase("GoodBye"))
            {
                System.out.println(sen1[1]);
            }
            else if (input == "Exit")
            {
                System.exit(0);
            }
            else
            {
                System.out.println("Enter A Perfect Option\n");
            }

        }
    }
}
