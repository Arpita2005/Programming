import java.util.*;
public class char_insert_del 
{
    public static void main(String[] args) 
    {
        Scanner scan=new Scanner(System.in);
        String sen;
        System.out.println("Enter a sen:\n");
        sen=scan.nextLine();
        StringBuilder sc=new StringBuilder(sen);
        System.out.println("================================\n");
        System.out.println("Enter the pos number to insert new char:\n");
        int num=scan.nextInt();
        System.out.println("================================\n");
        System.out.println("Enter the letter to insert:\n");
        char let=scan.next().charAt(0);
        sc.insert(num,let);
        System.out.println("||...................................||\n");
        System.out.println(sc);
        
        // Delete any substr or char  

        System.out.println("Enter the index number from where the del will start:\n");
        int id=scan.nextInt();
        System.out.println("Enter the last index number from where the del will start:\n");
        int last_id=scan.nextInt();
        sc.delete(id, last_id);
        System.out.println(sc);

    }
}
