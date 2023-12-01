// Interface A with a constant
interface A {
    int value = 10;
}

// Interface B with the same constant as A
interface B {
    int value = 20;
}

// Child class implementing both interfaces
class Child implements A, B {
    public void displayValues() {
        System.out.println("Value from interface A: " + A.value);
        System.out.println("Value from interface B: " + B.value);
    }
}

public class four {
    public static void main(String[] args) {
        Child child = new Child();
        child.displayValues();
    }
}
