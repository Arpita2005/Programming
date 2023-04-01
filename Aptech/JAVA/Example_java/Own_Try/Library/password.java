package Library;

import java.util.Scanner;

public class password
{
    static void password()
    {
        String num1,a;
        int c;
        Scanner sc1=new Scanner(System.in);
        Scanner n=new Scanner(System.in);
        System.out.println("Set a password while login ....");
        num1=sc1.nextLine();
        System.out.println("Enter Your Password :\n");
        a=sc1.nextLine();
        if(num1.equalsIgnoreCase(a))
        {
            System.out.println("Password Matched :) Welcome !!!\n");
        }
        else
        {
            System.out.println("Password does not matched....Want to set a password again ??\n");
            System.out.println("If Yes then press 1 || If No then press 2\n");
            c=n.nextInt();
            if(c==1)
            {
                password();
            }
            else
            {
                System.exit(0);
            }
        }

    }
}
