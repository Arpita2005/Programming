import java.util.*;
class accamt
{
    public static void gross_salary()
    {
        Scanner one = new Scanner(System.in);
        double amt;
        System.out.print("Enter your earning : ");
        amt=one.nextDouble();
        if(amt<=50000)
        {
        System.out.println("NIL (Tax not required) \n"); //No tax upto Rs. 50,000
        }
        else if((amt>50000)&&(amt<60000))
        {
            amt=amt*0.1; //10% interest Upto Rs. 60,000 
            System.out.println("\nAmount of tax you need to pay :Rs "+amt);
        }
         else if((amt>60000)&&(amt<150000))
        {
            amt=amt*0.2; //20% interest on Upto Rs. 1,50,000
            System.out.println("\nAmount of tax you need to pay :Rs "+amt);
        }
         else if(amt>150000)
        {
            amt=amt*0.3; //30% interest on Above Rs. 1,50,000
            System.out.println("\nAmount of tax you need to pay : Rs. "+amt);
        }
    }
   
}
public class incometaxcalculation
{
    public static void main(String[] args) 
    {
        accamt.gross_salary();
    }
}