import java.util.*;
class input
{
    String name="",roll="",sec="",class_no="";
}
class student_input_details {

   static  Scanner input = new Scanner(System.in);
    static Scanner sc1 = new Scanner(System.in);
    static int num;
    static input[] ip;
    public int show() {
        System.out.println("Enter how much numbers of details you want to entry ?\n");
        num = input.nextInt();
        System.out.println("Enter Your Details :\n");
        System.out.println(".....................\n");
        ip = new input[num];
        for (int i = 0; i < num; i++) {
            ip[i]=new input();
            System.out.println("Student number " +(i + 1)+ "\n");

            System.out.println("Enter Your Name :\n");
            ip[i].name = sc1.nextLine();
            System.out.println("Enter Your Roll :\n");
            ip[i].roll = sc1.nextLine();
            System.out.println("Enter Your Class :\n");
            ip[i].class_no = sc1.nextLine();
            System.out.println("Enter Your Section :\n");
            ip[i].sec = sc1.nextLine();
        }
        for (int i = 0; i < num; i++) {
            System.out.println((i + 1) + " Details\n");
            System.out.println("Student Name :\n" + ip[i].name);
            System.out.println("Student Roll :\n" + ip[i].roll);
            System.out.println("Student Class :\n" + ip[i].class_no);
            System.out.println("Student Section \n" + ip[i].sec);
            System.out.println("\n++++++++++++++++++++++++++++++++++\n");
        }
        return num;
    }

    public void search()
    {
        String name;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name to search the details :\n");
        name = sc.nextLine();
        for (int i = 0; i < num; i++)
        {
            if (ip[i].name.equalsIgnoreCase(name))
            {
                System.out.println(" Details "+(i + 1)+"\n");
                System.out.println("Student Name :\n" + ip[i].name);
                System.out.println("Student Roll :\n" + ip[i].roll);
                System.out.println("Student Class :\n" + ip[i].class_no);
                System.out.println("Student Section \n" + ip[i].sec);
                System.out.println("\n++++++++++++++++++++++++++++++++++\n");
            }
        }
    }

}
public class student_input
{
    public static void main(String[] args)
    {
        student_input_details sp=new student_input_details();
        sp.show();
        sp.search();

    }
}
