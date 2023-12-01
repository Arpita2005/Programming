public class Person
{
    private String name;
    private int age;

    // Constructor with name and age
    public void Persons(String name, int age)
    {
        this.name = name;
        this.age = age;
    }

   

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);  
    }


    public static void main(String[] args)
    {
        Person person1 = new Person();
        person1.Persons("Alice",10);
       // Person person1 = new Person("Alice");

        
        person1.displayInfo();

    }
}
// public class Person {
//     private String name;
//     private int age;

//     // Constructor with name and age
//     public Person(String name, int age) {
//         this.name = name;
//         this.age = age;
//     }

//     // Constructor with only name (reusing the constructor with name and age)
//     public Person(String name) {
//         this(name, 0); // Calls the other constructor with default age of 0
//     }

//     // Default constructor (reusing the constructor with only name)
//     public Person() {
//         this("Unknown"); // Calls the constructor with only name and default age of 0
//     }

//     public void displayInfo() {
//         System.out.println("Name: " + name);
//         System.out.println("Age: " + age);
//     }

//     public static void main(String[] args) {
//         Person person1 = new Person("Alice", 30);
//         Person person2 = new Person("Bob");
//         Person person3 = new Person();
        
//         person1.displayInfo();
//         person2.displayInfo();
//         person3.displayInfo();
//     }
// }
