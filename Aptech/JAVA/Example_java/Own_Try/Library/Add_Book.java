package Library;

import pack.A;

import java.io.IOException;
import java.util.Scanner;

public class Add_Book extends Input
{
    static int num =0;
    static Input[] ip;
    static void add() throws IOException
    {
        Scanner t=new Scanner(System.in);
        System.out.println("Enter How Much Books Details You want To entry ???\n");
        num=t.nextInt();
        ip=new Input[num];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<num;i++)
        {
            ip[i]=new Input();
            System.out.println("Book Details "+(i+1)+"\n");
            System.out.println("Enter The Book Name :\n");
            ip[i].bookname=sc.nextLine();
            System.out.println("Enter The Author Name :\n");
            ip[i].authorname=sc.nextLine();
            System.out.println("Enter The Publisher Name :\n");
            ip[i].publishername=sc.nextLine();
            System.out.println("Enter The page Number :\n");
            ip[i].pageno=t.nextInt();
            System.out.println("Enter The Price :\n");
            ip[i].price=t.nextInt();
            System.out.println("Enter The Book Id :\n");
            ip[i].bookid=sc.nextLine();
            System.out.println("Enter The Availability :\n");
            ip[i].availability=t.nextInt();
            System.out.println("=============+++++++++++============\n");
        }
       librarian_work.select(num);
    }
}
