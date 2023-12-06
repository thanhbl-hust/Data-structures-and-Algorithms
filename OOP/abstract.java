abstract class Shape {
    String color;

    public Shape(String color) {
        this.color = color;
    }
    public abstract double calculateArea();
    public void display() {
        System.out.println("This is a " + color + " shape.");
    }
}

class Circle extends Shape {
    double radius;
    public Circle(String color, double radius) {
        super(color);
        this.radius = radius;
    }
    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

class Rectangle extends Shape {
    double length;
    double width;

    public Rectangle(String color, double length, double width) {
        super(color);
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateArea() {
        return length * width;
    }
}

public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle("Blue", 5.0);
        Rectangle rectangle = new Rectangle("Green", 4.0, 6.0);
        circle.display();
        System.out.println("Area of circle: " + circle.calculateArea());

        rectangle.display();
        System.out.println("Area of rectangle: " + rectangle.calculateArea());
    }
}
