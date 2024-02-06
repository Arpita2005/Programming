import java.util.*;
class Rectangle
{
     int x ,y ;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the width and length");
        x=sc.nextInt();
        y=sc.nextInt();
    }
    void display()
    {
        System.out.println("the values are "+x+" "+y);
    }
}

public class n
{
    public static void main(String[] args)
    {
        Rectangle r1=new Rectangle();
        r1.input();
        r1.display();
    }
}
