class Rectangle {
    static int area(int width, int height) {
        return width * height;
    }
    static double area(double width, double height) {
        return width * height;
    }
    public static void main(String[] args){
        System.out.println("Area of Rectangle with integer dimensions: " + area(5, 10));
        System.out.println("Area of Rectangle with double dimensions: " + area(5.5, 10.5));
    }   
}