class Animal {
    public Animal() {
        System.out.println("Animal constructor");
    }
}

class Mammal extends Animal {
    public Mammal() {
        System.out.println("Mammal constructor");
    }
}

class Dog extends Mammal {
    public Dog() {
        System.out.println("Dog constructor");
    }
}

public class three {
    public static void main(String[] args) {
        Dog myDog = new Dog();
    }
}
