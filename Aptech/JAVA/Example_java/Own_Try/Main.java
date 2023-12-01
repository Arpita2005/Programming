// class MyClass {
//     // No-argument constructor
//     public MyClass() {
//         System.out.println("No-argument constructor called");
//     }
// }
// public class Main
// {
//     public static void main(String[] args) 
//     {
//         // Create an object of MyClass using the no-argument constructor
//         MyClass myObject = new MyClass();
//      }
// }

public class Main
{
    public void add(int a, int b) 
    {
        int x=a+b;
        System.out.println("Sum of integers: " +x);
    }
    public void add(int a, int b,int c) 
    {
        int y = a+b+c;
        System.out.println("Sum of integers: " +y);
    }

    public static void main(String[] args)
    {
       Main m = new Main();

        m.add(5, 7);
        m.add(5,6,7);
    }
}