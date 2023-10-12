#include <iostream>
using namespace std;

class Geometry {
protected:
    int sides;
};

class Triangle : public Geometry {
public:
    int base;
    int height;

    void setTri(double b, double h) {
        base = b;
        height = h;
        sides=3;
    }
};
class Squre : public Geometry {
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
        /*we cant access directlty with (size) because there are two parents sizeof
        AreaCalculator and sides have both so we need to specify for whose size 
        you wany
        
        if there are only one parent class of AreaCalculator then we can access 
        directly with the sides
        */
        if (Triangle::sides == 3) {
            return 0.5 * base * height;
        } 
        else if(Squre::sides==4){
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
