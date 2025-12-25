class Engineer{
    String name; int age;
    void set(String n, int a){
        name = n; age = a;
    }
    void display(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}
public class Main {
    public static void main(String[] args) {
        Engineer engineer1 = new Engineer();
        engineer1.set("Alice", 30);
        engineer1.display();
    }
}