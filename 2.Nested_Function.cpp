#include <iostream>
#include<string>
using namespace std;
class Binary{
    string s;
    void cheak();
    public:
    void read();
    void once_compliment();
    void display();
};
void Binary::read(){
    cout<<"enter a binay string "<<endl;
    cin>>s;
}
void Binary::cheak(){
    for(int i=0;i<s.size();i++){
        if(s[i]!='0' and s[i]!='1'){
            cout<<"Invalid binary string"<<endl;
            exit(0);
        }
    }
}
void Binary::once_compliment(){
    cheak();  //we cheak this under onces compliment function so that user doesnt have any idea abut cheak function
   for(int i=0;i<s.size();i++){
        if(s[i]=='0' ){
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
}
void Binary::display(){
    cout<<"your once complimented string "<<s<<endl;
}
int main(){
    Binary b;
    b.read();
    //b.cheak(); == we want to cheak without user information then we use nesting 
    b.once_compliment();
    b.display();
}






