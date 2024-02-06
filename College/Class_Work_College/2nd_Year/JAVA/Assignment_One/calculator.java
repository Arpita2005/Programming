import java.util.*;
class option
{
    int end,add=0,sub=0,mul=0,div=0;
    public void addition()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how much nummber you want to take :\n");
        end=sc.nextInt();
        int[] arr = new int[end];
        System.out.println("Enter the numbers :\n");
        for(int i=0;i<end;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("\n==========================\n");
        System.out.println("The addition of those numbers are :\n");
        for(int i=0;i<end;i++)
        {
          add+=arr[i];
        }
        System.out.println("\n"+add);
    }
    public void subtraction()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how much nummber you want to take :\n");
        end=sc.nextInt();
        int[] arr = new int[end];
        System.out.println("Enter the numbers :\n");
        for(int i=0;i<end;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("\n==========================\n");
        System.out.println("The subtraction of those numbers are :\n");
        for(int i=0;i<end;i++)
        {
          sub-=arr[i];
        }
        System.out.println("\n"+add);
    }
    public void multiplication()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how much nummber you want to take :\n");
        end=sc.nextInt();
        int[] arr = new int[end];
        System.out.println("Enter the numbers :\n");
        for(int i=0;i<end;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("\n==========================\n");
        System.out.println("The multiplication of those numbers are :\n");
        for(int i=0;i<end;i++)
        {
          mul*=arr[i];
        }
        System.out.println(add);
    }
    public void division()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how much nummber you want to take :\n");
        end=sc.nextInt();
        int[] arr = new int[end];
        System.out.println("Enter the numbers :\n");
        for(int i=0;i<end;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("\n==========================\n");
        System.out.println("The division of those numbers are :\n");
        for(int i=0;i<end;i++)
        {
          div/=arr[i];
        }
        System.out.println(div);
    }
}
class choose
{
    public void select()
    {
    while(true)
    {
        int s;
        Scanner g=new Scanner(System.in);
        option op=new option();
        System.out.println("|||  CALCULATOR  |||\n");
        System.out.println("What do you want to perform ??\n1. Addition \n2. Subtraction \n3.  Multiplication \n4. Division\n5. Exit\n");
        s=g.nextInt();
        if(s==1)
        {
            op.addition();
        }
        else if(s==2)
        {
            op.subtraction();
        }
        else if(s==3)
        {
            op.multiplication();
        }
        else if(s==4)
        {
            op.division();
        }
        else if(s==5)
        {
            System.exit(1);
        }
        else
        {
            System.out.println("Choose the correct option \n");
        }
    }
    }

}
public class calculator 
{
    public static void main(String[] args) 
    {
        choose ch=new choose();
        ch.select();
    }   
}
