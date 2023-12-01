class Shape {
    public double calcArea() {
        return 0.0;
    }
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

public class one {
    public static void main(String[] args) {
        // Create objects of Shape, Rectangle, and Circle classes
        Shape shape = new Shape();
        Rectangle rectangle = new Rectangle(5, 4);
        Circle circle = new Circle(3);

        // Calculate and display the areas
        System.out.println("Area of the Shape: " + shape.calcArea());
        System.out.println("Area of the Rectangle: " + rectangle.calcArea());
        System.out.println("Area of the Circle: " + circle.calcArea());
    }
}