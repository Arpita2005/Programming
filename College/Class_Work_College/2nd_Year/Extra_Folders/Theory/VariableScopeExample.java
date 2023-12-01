// public class VariableScopeExample {
//     static int num = 1; // y is an instance variable

// public void numerical()
//     {
//         // num=10;
//         System.out.println(num); // Accessing instance variable y in a method
//     }
    
//     public static void main(String[] args) 
//     {
//         VariableScopeExample obj = new VariableScopeExample();
//         System.out.println(obj.num); // Accessing instance variable num1 using the object obj
        
//         obj.numerical();// calling the method numerical to print num()

//     }
// }
public class VariableScopeExample {
    static int num = 1; // num is now a static variable

    public void numerical() {
        num = 10;
        System.out.println(num); // Accessing static variable num in a method
    }

    public void numericalone() {
        num = 20;
        System.out.println(num); // Accessing static variable num in a method
    }

    public static void main(String[] args) {
       VariableScopeExample obj = new VariableScopeExample();
        System.out.println(VariableScopeExample.num); // Accessing static variable num using the object obj
        obj.numerical(); // calling the method numerical to print num()
        obj.numericalone();
        System.out.println(VariableScopeExample.num); // Accessing static variable num using the object obj        
    }
}