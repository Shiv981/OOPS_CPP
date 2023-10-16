#include <iostream>
using namespace std;

/*
  case1: class a:public b
       //the constructor of b is called first the constructor of a is called
       
  case2: class a:public b,public c 
       //the order of execution of constructor b(),c(),a()->because b id is written before c
   
  case3: class a :public b,virtual public c 
       //the order of execution of constructor c(),b(),a()->virtual is a special case
      
*/

class Base1{
    int d1;
    public:
    Base1(int a){
        d1=a;
        cout<<"the constructor of Base1 is called "<<endl;
    }
    void printbase1(){
        cout<<"The value of base 1="<<d1<<endl;
    }
};
class Base2{
    int d2;
    public:
    Base2(int a){
        d2=a;
        cout<<"the constructor of Base2 is called "<<endl;
    }
    void printbase2(){
        cout<<"The value of base 2="<<d2<<endl;
    }
};
class derived:public Base2,virtual public Base1{
    int d3,d4;
    public:
    derived(int a,int b,int c,int d):Base2(b),Base1(a){
         d3=c;
         d4=d;
         cout<<"constructor of dirived is called"<<endl;
        
        }
        void printderived(){
            cout<<"The value of d3= "<<d3<<endl;
            cout<<"The value of d4="<<d4<<endl;
        }
} ;
int main(){
    derived d(1,2,3,4);
    d.printderived();
}




ass