#include <iostream>
#include<string>
using namespace std;
class Emp{
    int id;
    static int count;
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
int Emp::count;
int main(){
    Emp lucy[4];
    //here we create array of object
    for(int i=0;i<4;i++){
        lucy[i].setid();
        lucy[i].getid();
    }
}