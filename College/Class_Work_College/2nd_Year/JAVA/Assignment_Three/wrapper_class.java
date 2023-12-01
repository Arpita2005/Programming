import java.util.Scanner;

class Input {
    int i;
    byte b;
    char c;
    double d;
    short s;
    float f;

    public void integer() {
        Scanner sc = new Scanner(System.in);
        i = sc.nextInt();
        System.out.println("The integer value is: " + i);
        Integer i1 = i; // Use autoboxing to convert int to Integer
        System.out.println("After applying Integer: " + i1);
    }

    public void bytes() {
        Scanner sc = new Scanner(System.in);
        b = sc.nextByte();
        System.out.println("The byte value is: " + b);
        Byte b1 = b; // Use autoboxing to convert byte to Byte
        System.out.println("After applying Byte: " + b1);
    }

    public void floats() {
        Scanner sc = new Scanner(System.in);
        f = sc.nextFloat();
        System.out.println("The float value is: " + f);
        Float f1 = f; // Use autoboxing to convert float to Float
        System.out.println("After applying Float: " + f1);
    }

    public void chars() {
        Scanner sc = new Scanner(System.in);
        c = sc.next().charAt(0);
        System.out.println("The char value is: " + c);
        Character c1 = c; // Use autoboxing to convert char to Character
        System.out.println("After applying Character: " + c1);
    }

    public void doubles() {
        Scanner sc = new Scanner(System.in);
        d = sc.nextDouble();
        System.out.println("The double value is: " + d);
        Double d1 = d; // Use autoboxing to convert double to Double
        System.out.println("After applying Double: " + d1);
    }

    public void shorts() {
        Scanner sc = new Scanner(System.in);
        s = sc.nextShort();
        System.out.println("The short value is: " + s);
        Short s1 = s; // Use autoboxing to convert short to Short
        System.out.println("After applying Short: " + s1);
    }
}

public class wrapper_class {
    public static void main(String[] args) {
        Input input = new Input();
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Which sample do you want to try?\n1. Integer\n2. Bytes\n3. Float\n4. Char\n5. Doubles\n6. Shorts");
        n = sc.nextInt();
        if (n == 1) {
            input.integer();
        } else if (n == 2) {
            input.bytes();
        } else if (n == 3) {
            input.floats();
        } else if (n == 4) {
            input.chars();
        } else if (n == 5) {
            input.doubles();
        } else if (n == 6) {
            input.shorts();
        } else {
            System.out.println("Choose the correct option.");
        }
    }
}
