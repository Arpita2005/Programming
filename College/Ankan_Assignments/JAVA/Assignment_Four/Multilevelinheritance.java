class Grandparent {
    public Grandparent() {
        System.out.println("Constructor of Grandparent class");
    }
}

class Parent extends Grandparent {
    public Parent() {
        System.out.println("Constructor of Parent class");
    }
}

class Child extends Parent {
    public Child() {
        System.out.println("Constructor of Child class");
    }
}

public class Multilevelinheritance {
    public static void main(String[] args) {
        Child child = new Child();
    }
}
