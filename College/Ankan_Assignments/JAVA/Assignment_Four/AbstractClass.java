abstract class Shape {
    public abstract double calcArea();
}

class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double calcArea() {
        return length * width;
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calcArea() {
        return Math.PI * radius * radius;
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        // Attempt to instantiate Shape (which is abstract) - This is not allowed
        // Shape shape = new Shape(); // This line will cause a compilation error

        // Instantiate Rectangle and Circle class objects
        Rectangle rectangle = new Rectangle(50, 14);
        Circle circle = new Circle(3);

        // Calculate and display the areas
        System.out.println("Area of the Rectangle: " + rectangle.calcArea());
        System.out.println("Area of the Circle: " + circle.calcArea());
    }
}
