/*
 function overridding- function with same name same argument and same return
 type
 
 so we use scope resolution operator(::) to access the function of the particular class
      
*/

#include <iostream>
using namespace std;

class Base1 {
public:
    void speak() {
        cout << "Hello bro" << endl;
    }
};

class Base2 {
public:
    void speak() {
        cout << "Hello ji" << endl;
    }
};

class derived : public Base1, public Base2 {
public:
    void speak() {
        cout << "Shivoham" << endl;
    }
};

int main() {
    derived d;
    d.Base1::speak();  // Access the Base1's speak function        
    d.Base2::speak();  // Access the Base2's speak function
    d.speak();        //Access the derived speak function
    
}