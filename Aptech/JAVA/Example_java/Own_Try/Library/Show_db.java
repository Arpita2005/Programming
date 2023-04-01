package Library;

public class Show_db extends Add_Book
{
    static void show(int num)
    {
        for(int i=0;i<num;i++)
        {
            System.out.println("List Number : "+(i+1)+"\n");
            System.out.println("\n.....................\n\n");
            System.out.println("The Book Name :\n"+ip[i].bookname);
            System.out.println("The Author Name :\n"+ip[i].authorname);
            System.out.println("The Publisher Name :\n"+ip[i].publishername);
            System.out.println("The page Number :\n"+ip[i].pageno);
            System.out.println("The Price :\n"+ip[i].price);
            System.out.println("The Availability :\n"+ip[i].availability);
            System.out.println("=============+++++++++++============\n");
        }
        librarian_work.select(num);
    }
}
