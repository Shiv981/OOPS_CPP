#include <iostream>
using namespace std;
class Math{
    private:
    int a,b;
    public:
    int c,d,e;
    void set(int a1,int b1);   //declaration we dont want to mashup here uder class so we only declare this function here and give the defnition of the funtion outside the class
    void get(){
        cout<<"the value of a "<<a<<endl;
        cout<<"the value of b "<<b<<endl;
        cout<<"the value of c "<<c<<endl;
        cout<<"the value of d "<<d<<endl;
        cout<<"the value of e "<<e<<endl;
    }
};
//void Math= jo class math ke andar set function defition hai uski defnition 
void Math::set(int a1,int b1){
    a=a1;
    b=b1;
}
int main(){
    Math m1;
    //m1.a=134 = this will give error because a is private so we cant access
    m1.set(2,4);
    m1.c= 6;
    m1.d=8;
    m1.e=10;
    m1.get();
}