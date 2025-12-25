#include <iostream>
using namespace std;
int area(int length, int width) {
    return length * width;    
}
double area(double length, double width) {
    return length * width;
}
int main() {
    cout << area(5, 10) << endl;          // Calls int version
    cout << area(5.5, 10.2) << endl;      // Calls double version
}