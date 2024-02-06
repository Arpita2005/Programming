public class box {
    public static void main(String[] args) {
        // Autoboxing: Converting primitive int to Integer
        int primitiveInt = 42;
        Integer wrappedInt = primitiveInt; // Autoboxing

        System.out.println("Autoboxing: Primitive int to Integer");
        System.out.println("Primitive int: " + primitiveInt);
        System.out.println("Wrapped Integer: " + wrappedInt);
        System.out.println();

        // Unboxing: Converting Integer to primitive int
        Integer anotherInteger = 77;
        int unboxedInt = anotherInteger; // Unboxing

        System.out.println("Unboxing: Integer to primitive int");
        System.out.println("Wrapped Integer: " + anotherInteger);
        System.out.println("Unboxed int: " + unboxedInt);
    }
}
