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
   //we declare class complex here but when compiler compile the code he dont find the class compiler so we used forword deldration
   //if we cant give defnition here because compiler only know that there are a class complex it doesnt know about the class
   // so we declarev the functioon here and gibe the defnition to the fution after definiting the class cal
 
}; 
class complex{
    int a,b;
    friend int cal:: sumrealcomplex(complex a1,complex a2);
    //means give the access of your private data members to the function which is in cal class 
    public:
    void setdata(int a1,int b1){
        a=a1;
        b=b1;
    }
};
int cal:: sumrealcomplex(complex a1,complex a2){
   return (a1.a+a2.a);
}
int main(){
    complex a1,a2;
    a1.setdata(1,2);
    a2.setdata(2,3);
    cal c;
    int res=c.sumrealcomplex(a1,a2);
    cout<<"the sum of real part is "<<res;
    
    
    
    
    
}



