#include <iostream>
using namespace std;

class bank{
    int principal_ammount;
    int rate;
    float dar;
    int year;
    float finalammount;
    public:
    bank(){};  //if you want to do constructer overloading then this is the mendetry step of initilizing mtlb jab hum object banayenge to costructor call karega tb ye call hoga 
    bank(int a,int b,int c){
        principal_ammount=a;
        rate=b;
        year=c;
        finalammount=(principal_ammount*rate*year);
    }
    bank(int a,float b,int c){
        principal_ammount=a;
        dar=b;
        year=c;
        finalammount=float(principal_ammount*dar*year)/100;
    }
    void displayammount(){
        cout<<"the final ammount is "<<finalammount<<endl;
    }
    
    
};
int main(){
    bank rs1,rs2,rs3;
    rs1=bank(100,1,20);
    rs1.displayammount();
}




