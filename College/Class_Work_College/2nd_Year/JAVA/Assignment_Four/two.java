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

    public double calcArea() {
        return length * width;
    }
}


class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }
    public double calcArea() {
        return Math.PI * radius * radius;
    }
}

public class two {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5.0, 4.0);
        Circle circle = new Circle(3.0);

        // Call the calcArea method and display the results
        double rectangleArea = rectangle.calcArea();
        double circleArea = circle.calcArea();

        System.out.println("Area of Rectangle: " + rectangleArea);
        System.out.println("Area of Circle: " + circleArea);
    }
}
