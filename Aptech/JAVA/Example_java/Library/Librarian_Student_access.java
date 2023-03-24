package Library;

import java.util.Scanner;

public class Librarian_Student_access
{
    public void access()
    {
        Choose_Owner cp=new Choose_Owner();
        Scanner sc=new Scanner(System.in);
        int value;
        value=sc.nextInt();
        if(value==1)
        {
           Librarian_wp obj=new Librarian_wp();
           obj.select();
        }
        else if (value==2)
        {
            System.out.println("I am a student\n");
        }
        else
        {
            System.out.println("Please select the correct option \n");
            cp.owner();
        }
    }
}
