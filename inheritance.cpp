#include <iostream>
using namespace std;
class Shape{
    protected: string color;
    public: void setcoluor(string c){ colour=c; }
};

class Circle: publice Shape{
    double r;
public:
    void setradius(double x){ r=x;  
    double area(){ return 3.14*r*r; }}
};
int main(){
    Cicrle c;
    c.setcolour("Red");
    c.setradius(5.0);
    cout << c.area();
    return 0;
}