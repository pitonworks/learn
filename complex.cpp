#include <iostream>
using namespace std;

class Complex {
    double R, I;
public:
void set(double r, double i) { R=r; I=i; }
bool operator==(Complex c) {
    return (R==c.R && I==c.I);
}};
int main() {
    Complex c1, c2;
    c1.set(2.5, 3.5);
    c2.set(2.5, 3.5);
    if (c1 == c2)
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;
    return 0;
}