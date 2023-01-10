import java.util.*;
public class join_at_end
{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        String sen,sen2;
        System.out.println("Enter first part:\n");
        sen=scan.nextLine();
        System.out.println("...................");
        StringBuilder sc=new StringBuilder(sen);
        System.out.println("Enter sec part:\n");
        sen2=scan.nextLine();
        System.out.println("...................");
        sc.append(sen2);
        System.out.println(sc);
    }
}
