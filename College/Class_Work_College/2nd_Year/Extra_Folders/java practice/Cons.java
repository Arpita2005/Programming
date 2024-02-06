// a)	No-Arg Constructor
// b)	Parameterized Constructor
// c)	Default Constructor
// Then instantiate the class in another driver/main class to test the above features of the class. 
import java.util.*;
class Twelve 
{
    Twelve()
    {
        System.out.println("This is no argument constructor \n");
    }  
    Twelve(int num1,int num2) 
    {
        int res= num1+num2;
        System.out.println("Parameterized Constructor.............Result is :"+res);
    }
}
public class Cons 
{
    public static void main(String[] args) 
 {
    Twelve t1 = new Twelve();
    Scanner sc= new Scanner(System.in);
    int a=sc.nextInt();
    int b=sc.nextInt();
    Twelve t2 = new Twelve(a,b);
 }
}
