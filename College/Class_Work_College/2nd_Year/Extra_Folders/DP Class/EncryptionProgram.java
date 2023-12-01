import java.util.Scanner;

public class EncryptionProgram
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a message: ");
        String message = scanner.nextLine();

        System.out.print("Enter the encryption key (an integer): ");
        int key = scanner.nextInt();

        String encryptedMessage = encrypt(message, key);

        System.out.println("Encrypted message: " + encryptedMessage);

        scanner.close();
    }

    public static String encrypt(String message, int key)
    {
        StringBuilder encryptedMessage = new StringBuilder();

        for (char c : message.toCharArray())
        {
            if (Character.isLetter(c)) //Check if the current character is a letter
            {
                    char shifted = (char) (c + key); //Shift the letter by the specified key value.
                if (Character.isUpperCase(c) && shifted > 'Z')
                {
                    shifted = (char) (c + key - 26);
                }
                else if (Character.isLowerCase(c) && shifted > 'z')
                {
                    shifted = (char) (c + key - 26);
                }
                encryptedMessage.append(shifted);
            }
            else
            {
                encryptedMessage.append(c);
            }
        }
        return encryptedMessage.toString();
    }
}
