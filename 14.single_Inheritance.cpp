#include <iostream>
#include<string>
using namespace std;
class base{
    int d1;
    public:
    int d2;
    void setdata();
    int getdata();
};
void base::setdata(){
    d1=10;
    d2=34;
}
int base::getdata(){
    return d1;
}
class derived:public base{
    int d3;
    public:
    void setd3(){
        d3=d2*getdata();
    }
    void display(){
        cout<<"the value of d1= "<<getdata()<<endl;
        cout<<"the value of d2= "<<d2<<endl;
        cout<<"the value of d3= "<<d3<<endl;
    }
    
};
int main(){
    
    derived d;
    d.setdata();
    d.setd3();
    d.display();
    
}
