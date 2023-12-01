interface Parent1 {
    void display();
}

interface Parent2 {
    void show();
}

class Child implements Parent1, Parent2 {
    public void display() {
        System.out.println("Child's display method from Parent1");
    }

    public void show() {
        System.out.println("Child's show method from Parent2");
    }
}

public class MultipleInheritance{
    public static void main(String[] args) {
        Child child = new Child();
        child.display(); // Calls the display method from Parent1
        child.show();    // Calls the show method from Parent2
    }
}