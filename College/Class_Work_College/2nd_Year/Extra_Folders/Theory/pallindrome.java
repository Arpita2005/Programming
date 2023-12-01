import java.util.*;

public class pallindrome 
{
  public static void main(String[] args) 
  {
        int num,k=0,rem=0,reverse=0;
        Scanner one = new Scanner(System.in);
        System.out.println("Enter the number :\n");
        num=one.nextInt();
        k=num; 
        while(k!=0)
        {
            rem=k%10;
            reverse=reverse*10+rem;
            k=k/10;
        }
        if(num==reverse)
        {
            System.out.println("It is a pallindrome number\n ");
        }
        else
        {
            System.out.println("It is not a pallindrome number \n");
        }
  }   
}
