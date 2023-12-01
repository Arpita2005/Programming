import java.util.Scanner;

public class replaceall 
{
  public static void main(String[] args) 
  {
      String input;
      String i, j;
        Scanner sc = new Scanner(System.in);
        Scanner scc = new Scanner(System.in);
        System.out.println("Enter Your Input \n");
        input = sc.nextLine();
        System.out.println("Which letter you want to replace ?");
        i = scc.next();
        System.out.println("Enter the new character :\n");
        j = scc.next();
        System.out.println(input.replaceAll(i,j)); 
  }   
}
