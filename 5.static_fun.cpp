#include <iostream>
#include<string>
using namespace std;
class Emp{
    int id;
    //int count=0;
    //if we use this then for every object count is initilize so we cant find the number of employee with this 
    static int count;
    //so we use static int cout we declare this outside of the class so this is the use of static this by default start with one we we can give another value here then we cant give we give outside the fun 
    public:
    void setid(){
        cout<<"enter the id for emp no "<<count<<endl;
        cin>>id;
        count++;
    }
    void getid(){
        cout<<"the id for emp no "<<count-1<<" is"<<id<<endl;
        
    }
};
int Emp::count;   //here we can initialize the cout with any number but not underinitilize under rthe class

int main(){
    Emp e1,e2,e3;
    e1.setid();
    e1.getid();
    e2.setid();
    e2.getid();
    e3.setid();
    e3.getid();
}