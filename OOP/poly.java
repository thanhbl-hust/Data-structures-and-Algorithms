class Shape {
    public void draw() {
        System.out.println("Drawing a shape");
    }
}

class Circle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a circle");
    }
}
class Rectangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a rectangle");
    }
}
class Triangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a triangle");
    }
}

public class Main {
    public static void drawShape(Shape shape) {
        shape.draw();
    }

    public static void main(String[] args) {
        Circle circle = new Circle();
        Rectangle rectangle = new Rectangle();
        Triangle triangle = new Triangle();
        drawShape(circle);     // Draw a circle
        drawShape(rectangle);  // Draw a rectangle
        drawShape(triangle);   // Draw a triangle
    }
}
