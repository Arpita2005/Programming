import java.util.*;
class accountamount
{
    public static void salary()
    {
        Scanner one = new Scanner(System.in);
        double amount;
        System.out.println("Enter The Salary :\n");
        amount=one.nextDouble();
        if(amount<=50000)
        System.out.println("No need to pay Tax ..Thank You \n");
        else if((amount>50000)&&(amount<60000))
        {
            amount=amount*0.1;
            System.out.println("The Tax amount is : "+amount);
        }
         else if((amount>60000)&&(amount<150000))
        {
            amount=amount*0.2;
            System.out.println("The Tax amount is : "+amount);
        }
         else if(amount>150000)
        {
            amount=amount*0.3;
            System.out.println("The Tax amount is : "+amount);
        }
        else
        {
            System.out.println("Give proper Amount \n");
        }
    }
   
}

public class tax 
{
    public static void main(String[] args) 
    {
        accountamount.salary();
    }
}
