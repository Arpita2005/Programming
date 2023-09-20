import java.util.*;
public class pattern
{
    public static void main(String[] args) 
    {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows :\n");
        n=sc.nextInt();
        System.out.println("The pattern is :\n");
        for(int i=1;i<=n;i++)
        {                                                                                                                                                                                                 
            for(int j=1;j<=i;j++)
            {
                System.out.print(i+" ");
            }
             System.out.println();

        }     
    }
}