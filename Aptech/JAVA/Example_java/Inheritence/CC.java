//package Inheritence;

class A32
{
    void msg()
    {
        System.out.println("Hello A3");
    }
}
class B3
{
    void msg()
    {
        System.out.println("Welcome B3");
    }
}
//Multiple inherit is not allowed in java
class CC extends A32//,B3   //(Remove the //comment before the B3 class to get actual file
{
    //suppose if it were

    public static void main(String[] args)
    {
        CC obj=new CC();
        obj.msg();//Now which msg() method would be invoked?
    }
}