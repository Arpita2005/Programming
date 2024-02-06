//9.Write a Java program to split the words from the input sentence. Then print each words separately. 
import java.util.*;
public class nine {
    public static void main(String[] args) {
        String a;
        Scanner ab=new Scanner(System.in);
        System.out.println("Enter the input:\n");
        a=ab.nextLine();
        String array[]= a.split(" ");
        for(int i=0;i!=array.length;i++)
        {       System.out.println(array[i]); }
    }
}
