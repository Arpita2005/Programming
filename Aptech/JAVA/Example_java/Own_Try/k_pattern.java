import  java.util.*;
public class k_pattern 
{
 public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String  name;
    int scr=0;
    System.out.println("Enter your name:\n");
    name=sc.nextLine();
    scr=name.length();
    for(int i=scr-1;i>=0;i--)

    {
        for(int k=0;k<=i;k++)
        {  
            try {
               Thread.sleep(500); 
            } catch (Exception e) {}
            System.out.print(name.charAt(k));
        }
        System.out.println();
    }
    for(int l=1;l<scr;l++)
    {
        for(int j=0;j<=l;j++)
        {
           try {
            Thread.sleep(500);
        } catch (Exception e) {}
        System.out.print(name.charAt(j));
    }
        System.out.println();
    }


 }

}
