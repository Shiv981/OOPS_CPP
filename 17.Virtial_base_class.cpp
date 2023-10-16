/* In object-oriented programming, a virtual base class is a nested inner class whose functions and member variables can be overridden and redefined by subclasses of an outer class. Virtual classes are analogous to virtual functions.

if we use virtual keyword while inherite the property in the old  question then we can remove amiguity
/*


#include <iostream>
using namespace std;

class Geometry {
protected:
    int sides;
};

class Triangle :  virtual public Geometry {  //here the a is again refinded in the class
public:
    int base;
    int height;

    void setTri(double b, double h) {
        base = b;
        height = h;
        sides=3;
    }
};
class Squre :  virtual public Geometry {   //here the a is again refinded in the class
public:
    public:
    int sl;

    void setsqu(int s) {
        sl=s;
        sides=4;
    }
};



class AreaCalculator : public Triangle,public Squre {
public:
    double calculateArea() {

    //now we can we this 
        
        if (sides == 3) {
            return 0.5 * base * height;
        } 
        else if(sides==4){
            return sl*sl;
        }
        else {
            return 0.0; // Returning 0 when the sides are not 3
        }
    }
};

int main() {
    AreaCalculator a;
    a.setTri(5, 4); // Set the base and height
    double area = a.calculateArea();
    cout << "Area: " << area << endl;

    return 0;
}
