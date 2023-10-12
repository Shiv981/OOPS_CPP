#include <iostream>
#include<string>
using namespace std;
class complex{
    /* constructor is a special member function with the same name as 
    class
    ->it is used to initilize the obj of the class
    ->it is automatically invoked when we create the object
    ->no return type is required 
    ->it should be declared in the public section of the class
    ->it can have default argumets
    ->we cannot reffered to the address
    */
    
    int a,b;
    public:
    //**********************default constructor(called by default)******************
/*
    complex(){
        a=10;
        b=7;
    }
*/
//**************************parametrized constructer*************
      complex(int x,int y){
           a=x;
           b=y;
}

    void printdata(){
        cout<<"your complext number is  "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    //complex a1;
  //  complex a1(1,3)// we can declare parametrized constructer like this or 
    complex a1=complex(1,3);
    complex a2(a1);  
    complex a3;
    //a3=a1--->in this case no copy constructor calles because the object is already created
    //copy constructer= a2 should exactly resemle a1 (by default no need to describe in class)
    //when no copy constructor is found ,compiler suplies his own copy constructor 
      complex a4=a1 //in this case copy construter invoked 
      a1.printdata();  
      a2.printdata();
}   

