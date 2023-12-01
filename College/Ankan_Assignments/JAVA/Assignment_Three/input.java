package bank;
import java.util.*;
 public class input
{
   public static String name,branch_name;
   public static int id,deposit,withdraw,amount;
     public input(String n, String b_name, int id, int dep, int wid, int amn)
    {

        this.name=n;
        this.branch_name=b_name;
        this.id=id;
        this.deposit=dep;
        this.withdraw=wid;
        this.amount=amn;

    }
    public static void details()
    {
        Scanner sc= new Scanner(System.in);
        Scanner in= new Scanner(System.in);
        System.out.println("Enter Your Name :\n");
        String  n=sc.nextLine();
        System.out.println("Enter Your Id :\n");
        int id=in.nextInt();
        System.out.println("Enter Your Branch name :\n");
        String b_name=sc.nextLine();
        System.out.println("Enter Your Opening Amount \n");
        int  amn=in.nextInt();
        input ip = new input(n,b_name,id,0,0,amn);
    }
    public static void deposit()
    {
        int d;
        Scanner sc=new Scanner(System.in);
        System.out.println("Welcome "+name);
        System.out.println("Enter how much amount you want to deposit :\n");
        d=sc.nextInt();
        amount+=d;
        deposit=amount;
        System.out.println("Bank balance of : "+name+" is "+deposit);
    }
    public static void withdraw()
    {
        int w;
        Scanner sc=new Scanner(System.in);
        System.out.println("Welcome "+name);
        System.out.println("Enter how much amount you want to withdraw :\n");
        w=sc.nextInt();
        if(w<=amount)
        {
            amount-=w;
            withdraw=amount;
            System.out.println("Bank balance of : "+name+" is "+withdraw);
        }
        else
        {
            System.out.println("Insufficient Balance \n");
        }
    }
}