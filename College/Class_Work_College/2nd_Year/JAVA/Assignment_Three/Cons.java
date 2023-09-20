import java.util.*;
class Rectangle
{
    int x,y;
    Rectangle(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    Rectangle(int a)
    {
        x=10;
        y=a;
    }
    Rectangle()
    {
        x=0;
        y=0;
    }
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the width and length");
        this.x=sc.nextInt();
        this.y=sc.nextInt();
    }
    void display()
    {
        System.out.println("the values are "+x+" "+y);
    }
    void area()
    {
        int area;
        area=x*y;
        System.out.println("the area is "+area);
    }
}

public class Cons
{
    public static void main(String[] args)
    {
        Rectangle r1=new Rectangle();
        r1.input();
        r1.display();
        r1.area();
        Rectangle r2=new Rectangle(10,20);
        r2.display();
        r2.area();
        Rectangle r3=new Rectangle(50);
        r3.display();
    }
}
