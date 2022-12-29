import java.util.*;
class mirror_image
{
    public static void main(String abc[])
    {
        Scanner sc=new Scanner(System.in);
        int num1,num2,num3,rows;
        System.out.println("Enter the number of rows:\n");
        rows=sc.nextInt();
        for(num1=1;num1<=rows;num1++)
        {
            for(num2=1;num2<=rows-num1;num2++)
            {
                System.out.print("  ");
            }
            for(num2=1;num2<=num1;num2++)
            {
                System.out.print(" "+num2);
            }
            for(num3=num2-2;num3>=1;num3--)
            {
                System.out.print(" "+num3);
            }
            System.out.println();
        }

    }
}