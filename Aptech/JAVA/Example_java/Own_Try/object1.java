import java.util.Scanner;
// class Rect 
// {
//     int height,length;
//     public void getdetails()
//     {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the height :\n");
//         height=sc.nextInt();
//         System.out.println("Enter the length :\n");
//         length=sc.nextInt();
//     }
//     public void size()
//     {
//         System.out.println("The size is : "+height*length);
//     }

// }
// public class object1 
// {
//     public static void main(String[] args) 
//     {
//          Rect r1=new Rect();
//          r1.getdetails();
//          r1.size();  
//          Rect r2=r1;//new Rect();
//         //  r2.getdetails();
//         //  r2.size();   
//     } 
// }
class Rect {
    int height, length;

    public void getDetails() {
       Scanner sc = new Scanner(System.in);
        System.out.println("Enter the height :\n");
        height=sc.nextInt();
        System.out.println("Enter the length :\n");
        length=sc.nextInt();
    }

    public void size() {
        System.out.println("The size is: " + height * length);
    }
}

public class object1 {
    public static void main(String[] args) 
    {
        Rect r1 = new Rect(); // Create a new Rect object and assign it to r1
        r1.getDetails(); // Input the details for r1
        r1.size(); // Calculate and print the size of r1

        Rect r2 = r1; // Assign the reference of r1 to r2

        // Now, both r1 and r2 reference the same Rect object in memory
        System.out.println("Setting r2 = r1");

        // Let's change the height and length through r2
        r2.height = 10;
        r2.length = 5;

        System.out.println("Updated values through r2:");

        // Print the size through r1 and r2
        r1.size(); // The size is now 10 * 5 = 50
        r2.size(); // The size is also 10 * 5 = 50
    }
}
public class Dog {
    private String name;

    public Dog(String name) {
        this.name = name;
    }

    public void bark() {
        System.out.println(name + " says Woof!");
    }

    public void changeName(String newName) {
        name = newName;
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog1 = new Dog("Buddy");
        Dog dog2 = dog1;

        dog1.bark(); // This will print "Buddy says Woof!"

        dog2.changeName("Rex"); // Pass the reference to the method
        dog1.bark(); // This will print "Rex says Woof!" because the change is visible through both dog1 and dog2
    }
}