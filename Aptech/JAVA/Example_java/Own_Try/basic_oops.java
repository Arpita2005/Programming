class pen
{
    String color;
    String type;

    public void work()
    {
        System.out.println("It helps us to write\n");
    }
    public void colour()
    {
        System.out.println(this.color);
        System.out.println(this.type);
    }
}
public class basic_oops {
    public static void main(String[] args) {
        pen p=new pen();
        p.work();

        pen p1=new pen(); //by using new a space is allocated in memory heap and all objects stoed there.
                        // Constructer helps to creat object
        p1.color="Black";
        p1.type="Jel";
        pen p2=new pen();
        p2.color="Blue";
        p2.type="Ballpoint";

        p1.colour();
        p2. colour();
        // System.out.println(p1.color);
        // System.out.println(p1.type);
        // System.out.println(p2.color);
        // System.out.println(p2.type);
    }
    
}
