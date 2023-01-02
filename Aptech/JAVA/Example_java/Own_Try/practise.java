import java.util.Scanner;
public class practise
{
    public static void main(String[] args)
    {
    char name;
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter a character\n");
    name=sc.next().charAt(0);
    if(name=='m')
    {
        System.out.println("It is correct\n");
    }
}

}
