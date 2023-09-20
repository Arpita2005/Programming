import java.util.*;
class Primechecke
{
    int num ;
    void input()
    {
        Scanner number=new Scanner(System.in);
        System.out.println("Enter the number");
        num=number.nextInt();
    }
    void primecheck()
    {
        int i;
        if (num <= 1) 
        {
           System.out.println(num+" it is not a prime number ");
        }
        for (i = 2; i  < num; i++)
        {
            if (num % i == 0)
            {
                System.out.println(num+" it is not a prime number ");
                break;
            }
        }
        if(i==num)
        System.out.println(num+" it is a prime number ");
    }
}
public class Prime
{
    public static void main(String[] args)
  {
    Primechecke p = new Primechecke();
    p.input();
    p.primecheck();    
  }    
}
 
    

