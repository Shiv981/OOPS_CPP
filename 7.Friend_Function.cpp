#include <iostream>
#include<string>
using namespace std;
class complex{
    /* properties of friend function
    1.Not in the scope of class
    2.science it is not in the scope of the class, it cannot from object of that class 
          c1.sumcomplex()------->invalid
    3.usally contains the objects as arguments
    4.can declare public or private 
    */
    int a,b;
    friend complex sumcomplex(complex a1,complex a2);
    //declaratin of frient function
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void getdata(){
        cout <<a<<" + "<<b<<"i"<<endl;
    }
    
}; 
//return type complex= this function will return a object of the complex class
complex sumcomplex(complex a1,complex a2){
    complex a3;
    a3.setdata((a1.a+a2.a),(a1.b+a2.b));
    return a3;
}
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.getdata();
    c2.setdata(3,4);
    c2.getdata();
   // c3.sumcomplex(c1,c2); //we we try to acces as a data member funtion then it gives you the error 
     c3=sumcomplex(c1,c2);
    c3.getdata();
}