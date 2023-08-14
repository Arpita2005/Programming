import java.util.*;
public class key_word 
{
    public static void def()
    {
        String input,key;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please give your input :\n");
        input=sc.nextLine();
        System.out.println("Enter the key that you want to find :\n");
        key=sc.nextLine();
        if(input.contains(key))
            {
              System.out.println(key+" is found in this input \n");
            }
            else
            {
                System.out.println("Can't Find Sorry \n");
            }
    }
    public static void main(String[] args) 
    {
        def();
    }
}
