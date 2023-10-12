#include <iostream>
#include<string>
using namespace std;
class Shop{
    int itemid[100];
    int itemprize[100];
    int counter=0;
    public:
    void set();
    void display();
};
void Shop::set(){
    cout<<"enter the item id for item number "<<counter<<endl;
    cin>>itemid[counter];
     cout<<"enter the item prize for item number "<<counter<<endl;
    cin>>itemprize[counter];
    counter++;
    
}
void Shop::display(){
    for (int i=0;i<=counter;i++){
        cout<<"id="<<itemid[i]<<"   prize="<<itemprize[i]<<endl;
    }
}
int main(){
    Shop s;
    s.set();
    s.set();
    s.set();
    s.display();
}