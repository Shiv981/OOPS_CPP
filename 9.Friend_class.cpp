#include <iostream>
#include<string>
using namespace std;

//forword delaration
class complex;
 
 class cal{
   public:
   int add(int a,int b){
       return (a+b);
   }
   int sumrealcomplex(complex,complex);
   int sumimgcomplex(complex,complex);
 
}; 
class complex{
    int a,b;
    //if there are many function of the cal class so we need not to declare all the funtion sepratly
    //we use friend class
              //friend int cal:: sumrealcomplex(complex a1,complex a2);
              //friend int cal:: sumimgcomplex(complex a1,complex a2);
    //means give the access of your private data members to the function which is in cal class 
    friend class cal;
    public:
    void setdata(int a1,int b1){
        a=a1;
        b=b1;
    }
};
int cal:: sumrealcomplex(complex a1,complex a2){
   return (a1.a+a2.a);
}
int cal:: sumimgcomplex(complex a1,complex a2){
   return (a1.b+a2.b);
}
int main(){
    complex a1,a2;
    a1.setdata(1,2);
    a2.setdata(2,3);
    cal c;
    int res1=c.sumrealcomplex(a1,a2);
    cout<<"the sum of real part is "<<res1<<endl;
    int res2=c.sumimgcomplex(a1,a2);
    cout<<"the sum of img part is "<<res2;
    
    
    
    
    
}



