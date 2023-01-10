import java.util.Scanner;
class tr_catch
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num1,num2,div;
        System.out.println("Enter the first num:\n");
        num1=sc.nextInt();
        System.out.println("....................................");
        System.out.println("Enter the Second num:\n");
        num2=sc.nextInt();
        System.out.println("....................................");
        try {
            div=num1/num2;
            System.out.println("Result:\n");
            System.out.println("................");
            System.out.println(div);
        } catch (Exception e) {
            System.out.println("There is a error because of:\n");
            System.out.println(e);
        }    
    }
}