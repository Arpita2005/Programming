package Library;
import java.util.Scanner;

public  class Choose_Owner
{
    public void owner()

    {
            System.out.println("==================\n");
            System.out.println(" ||  Library  ||\n");
            System.out.println("===================\n");
            System.out.println("Give Your Identity please\n1. Librarian\n2. Candidate\n");
            Librarian_Student_access la=new Librarian_Student_access();
            la.access();
    }
}
