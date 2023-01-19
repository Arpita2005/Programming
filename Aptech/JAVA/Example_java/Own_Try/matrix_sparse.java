import java.util.*;
public class matrix_sparse
{
    
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int i,j;
        int row,coloumn;
        int[][] matrix=new int[20][20];
        System.out.println("Enter the number of rows:\n");
        row=sc.nextInt();
        System.out.println("Enter the number of coloumn:\n");
        coloumn=sc.nextInt();
        System.out.println("Enter the elements of matrix:\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<coloumn;j++)
            {
                System.out.println("Enter element "+(i+1)+"'s number)");
                matrix[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<coloumn;j++)
            {
                System.out.print(matrix[i][j]);
            }
            System.out.println("\n");
        }
    }
    
}

