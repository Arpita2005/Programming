package Library;

public class Search_avail extends Add_Book
{
    static void avail(int num)
    {
        String j="SEARCHING";
        for (int k = 0; k < j.length(); k++)
        {
            try {
                Thread.sleep(900);
            }
            catch (Exception e) {
                System.out.println(e.getCause());
            }
            System.out.println(j.charAt(k));
        }
        System.out.println("\n=========\n");
        for(int i=0;i<num;i++)
        {
            System.out.println("Book Details "+(i+1)+"\n");
            System.out.println("The Book Name :\n"+ip[i].bookname);
            System.out.println("The Author Name :\n"+ip[i].authorname);
            System.out.println("The Publisher Name :\n"+ip[i].publishername);
            System.out.println("The page Number :\n"+ip[i].pageno);
            System.out.println("The Price :\n"+ip[i].price);
            System.out.println("The Book Id is :\n"+ip[i].bookid);
            System.out.println("The Number Of Availability :\n"+ip[i].availability);
            System.out.println("=============+++++++++++============\n");
        }
    }
}
