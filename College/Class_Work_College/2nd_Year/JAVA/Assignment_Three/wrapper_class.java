import java.util.*;

class input
{
    int i;
    byte b;
    char c;
    long k;
    double j;
    short l;
    float f;
    boolean b2=true;
    public void integer()
    {
        Scanner sc = new Scanner(System.in);
        i=sc.nextInt();
        System.out.println("The integer value is : "+i);
        Integer i1=i;
        System.out.println("After applying Integer : "+i1);
    }
    public void bytes()
    {
        Scanner sc = new Scanner(System.in);
        i=sc.nextByte();
        System.out.println("The byte value is : "+i);
        Byte i1=i;
        System.out.println("After applying Byte : "+i1);
    }
    public void floats()
    {
        Scanner sc = new Scanner(System.in);
        i=sc.nextFloat();
        System.out.println("The float value is : "+i);
        Float i1=i;
        System.out.println("After applying Float : "+i1);
    }
    public void chars()
    {
        Scanner sc = new Scanner(System.in);
        i=sc.next().charAt(0);
        System.out.println("The char value is : "+i);
        Character i1=i;
        System.out.println("After applying Character : "+i1);
    }
    public void doubles()
    {
        Scanner sc = new Scanner(System.in);
        i=sc.nextDouble();
        System.out.println("The double value is : "+i);
        Double i1=i;
        System.out.println("After applying Double : "+i1);
    }
    public void shorts()
    {
        Scanner sc = new Scanner(System.in);
        i=sc.nextShort();
        System.out.println("The short value is : "+i);
        Short i1=i;
        System.out.println("After applying Short : "+i1);
    }
}
public class wrapper_class 
{
    input i =new input();
    System."Which sample you want to do ?\n");
}
