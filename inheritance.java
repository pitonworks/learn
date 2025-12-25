class Shape{
    String colour;
    void setcolour(String c){ colour=c}
}
class Circle extends Shape{
    double radius;
    void setradius(double r){ radius=r; }
    double area(){ return 3.14*radius*radius; }
}

public class Main {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.setcolour("Red");
        c.setradius(5.0);
        System.out.println("Colour: " + c.colour);
        System.out.println("Area: " + c.area());
    }
}