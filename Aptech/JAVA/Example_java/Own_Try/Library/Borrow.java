package Library;
import java.io.*;
import java.util.*;
public class Borrow extends Add_Book {
    static void borrowbook() throws IOException {
        FileWriter wf = new FileWriter("Store_input.txt");
        String sb, sa, sid, data = "";
        Scanner one = new Scanner(System.in);
        System.out.println("Enter The Book details To borrow a Book :\n");
        System.out.println("Book Name ??\n");
        sb = one.nextLine();
        System.out.println("Author Name ??\n");
        sa = one.nextLine();
        System.out.println("Book Id ??\n");
        sid = one.nextLine();
        for (int i = 0; i < num; i++) {
            if (ip[i].bookname.equalsIgnoreCase(sb) && (ip[i].authorname.equalsIgnoreCase(sa)) && (ip[i].bookid.equalsIgnoreCase(sid))) {
                System.out.println("The Book Name :\n" + ip[i].bookname);
                System.out.println("The Author Name :\n" + ip[i].authorname);
                System.out.println("The Publisher Name :\n" + ip[i].publishername);
                System.out.println("The page Number :\n" + ip[i].pageno);
                System.out.println("The Price :\n" + ip[i].price);
                System.out.println("The Book Id is:\n" + ip[i].bookid);
                date d = new date();
                d.date();
                System.out.println("\n\n You Have Successfully Borrowed !!!!\n");
                System.out.println("After Borrowing the number of availability is :" + (ip[i].availability - 1) + " of " + ip[i].bookname);
                data += "Book Name :" + ip[i].bookname + " \nAuthor Name : " + ip[i].authorname + " \nPublisher Name :" + ip[i].publishername + " \nPage No :" + ip[i].pageno + " \nPrice is : " + ip[i].price + " \nDate is: " + d.date + " | " + "\n";
            } else {
                System.out.println("Does not match with the given input \n");
            }
        }
        wf.write(data);
        wf.close();
    }

    static void op_choos() throws IOException
    {
        System.out.println("Do you want to borrow again ?\nYes == 1               No == 2\n");
        int c;
        Scanner sc = new Scanner(System.in);
        c = sc.nextInt();
        if (c == 1)
        {
            Borrow.borrowbook();
        } else if (c == 2)
        {
            System.out.println("Thank You !! Bye......\n");
            System.exit(0);
        } else
        {
            System.out.println("Select the correct Option :\n");
            op_choos();
        }
    }
}

