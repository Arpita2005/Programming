// 5.	Write a program to print the following pattern given n as argument: - [for input 3]

//     1

//     2          2

//    3          3          3
import  java.util.*;
public class five 
{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int row;
    System.out.println("Enter the number of rows :\n");
    row=sc.nextInt();
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            System.out.print(i+" ");
        }
        System.out.println();
    }
  }   
}
