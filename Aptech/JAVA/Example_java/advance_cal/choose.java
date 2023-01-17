package advance_cal;
import java.util.*;
public class choose
{
    int decide,select;
    Scanner sc=new Scanner(System.in);
    public void choose()
    {
        addition ad=new addition();
        subtraction sc1=new subtraction();
        multiplication mp=new multiplication();
        division dv=new division();
        remainder rd= new remainder();


        System.out.println("What do you want to do\n1. Addition\n2. Subtraction\n3. Multiplication\n4.Division\n5.Remainder");
        decide=sc.nextInt();
        if(decide==1)
        {
            ad.addition();
        }
        else if(decide==2)
        {
            sc1.subtraction();
        }
        else if(decide==3)
        {
            mp.multiplication();
        }
        else if(decide==4)
        {
            dv.division();
        }
        else if(decide==5)
        {
            rd.remainder();
        }
        else
        {
            System.out.println("You have entered wrong option   Sorry!!");
        }

        System.out.println("Do you want to continue\n1: Yes\n2: No\n");
        select=sc.nextInt();
        if(select==1)
        {
            choose();
        }
        else if(select==2)
        {
            System.exit(0);
        }
        else
        {
            System.out.println("Enter the correct option please \n");
        }
    }
    
}
