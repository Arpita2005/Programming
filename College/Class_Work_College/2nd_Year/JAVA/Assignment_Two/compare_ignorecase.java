import java.util.Scanner;

public class compare_ignorecase 
{
    public static void main(String[] args) {
          String sen,sen1;
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter the first input :\n"); 
    sen=sc.nextLine();
    System.out.println("Enter the second input :\n"); 
    sen1=sc.nextLine();
    if(sen.compareToIgnoreCase(sen1)==0)
    {
        System.out.println("Both Strings are same \n");
    }
    else
    {
        System.out.println("Strings are not same \n");
    }   
    }

}
