#include <iostream>
#include<string>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void complexsum(complex a1,complex a2){   //here we pass two objects a1 and a2 as an argument
        a=a1.a+a2.a;
        b=a1.b+a2.b;
    }
    void display(){
        cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3.complexsum(c1,c2);
    c3.display();
}