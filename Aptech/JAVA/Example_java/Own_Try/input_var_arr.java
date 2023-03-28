import java.util.Scanner;
class detailsone
{
    int num;
    public void record()
    {
        Scanner tc=new Scanner(System.in);
        Scanner sc=new Scanner(System.in);
        System.out.println("\nEnter How much student's details you want to entry :\n");
        num=tc.nextInt();
        String[]name =new String[num];
        String[] class_num=new String[num];
        int[] roll=new int[num];
        String[] sec=new String[num];

        for(int i=0;i<num;i++)
        {
            System.out.println("Details :"+(i+1)+"\n");
            System.out.println("Enter Your Name :\n");
            name[i]=sc.nextLine();
            System.out.println("Enter Your Class :\n");
            class_num[i]=sc.nextLine();
            System.out.println("Enter Your Roll :\n");
            roll[i]=tc.nextInt();
            System.out.println("Enter Your Sec :\n");
            sec[i]=sc.nextLine();
            System.out.println("\n++++++++++++++++++++++++++++\n");
        }
        for(int i=0;i<num;i++)
        {
            System.out.println(" Details "+(i + 1) +"\n");
            System.out.println("Student Name :\n" +name[i]);
            System.out.println("Student Roll :\n" +roll[i]);
            System.out.println("Student Class :\n" +class_num[i]);
            System.out.println("Student Section \n" +sec[i]);
            System.out.println("\n++++++++++++++++++++++++++++++++++\n");
        }

        String namesearch;
        Scanner sc1=new Scanner(System.in);
        System.out.println("Enter the name to search the details :\n");
        namesearch=sc1.nextLine();
        for(int i=0;i<num;i++)
        {
            if(name[i].equalsIgnoreCase(namesearch))
            {
                System.out.println("Details "+(i + 1) +"\n");
                System.out.println("Student Name :\n" +name[i]);
                System.out.println("Student Roll :\n" +roll[i]);
                System.out.println("Student Class :\n" +class_num[i]);
                System.out.println("Student Section \n" +sec[i]);
                System.out.println("\n++++++++++++++++++++++++++++++++++\n");
            }
        }
    }
}
public class input_var_arr
{
    public static void main(String[] args)
    {
            detailsone dp=new detailsone();
            dp.record();
    }
}
