#include <iostream>
using namespace std;

class Engineer {
    string name; int age;
public:
void set(string n, int a) {
    name = n; age = a;
}
void display() {
    cout << "Name: " << name << ", Age: " << age << endl;
}
};

int main() {
    Engineer engineer1;
    engineer1.set("Alice", 30);
    engineer1.display();
}