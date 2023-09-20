import java.util.*;
class fact
{
    public static void fact()
    {
        int num,mul=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number :\n");
        num=sc.nextInt();
        for(int i=num;i>1;i--)
        {
            mul=mul*i;
        }
        System.out.println("The Factorial is :"+mul);
    }
    public static void main(String[] args) 
    {
        fact();   
    }

}
