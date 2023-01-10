import java.util.Scanner;
public class reverse 
{
    public static void main(String[] args) {
        Scanner a=new Scanner(System.in);
        String input;
        System.out.println("Enter your input:\n");
        input=a.nextLine();
        StringBuilder ab=new StringBuilder(input);
        for(int i=0;i<ab.length()/2;i++)
        {
                int front=i;
                int back=ab.length()-1-i;
                char frontchar=ab.charAt(i);
                char backchar=ab.charAt(back);

                ab.setCharAt(i, backchar);
                ab.setCharAt(back,frontchar);
        }
    }
}
