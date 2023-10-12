#include <iostream>
#include<string>
using namespace std;
int count=0;
class num{
  //destructor never takes an argument nor does return any value it is uded to free the memory taken by the object
  public:
  num(){
      cout<<"the constructor is called for object number "<<count<<endl;
      count++;
  }
  ~num(){
      cout<<"the distructor is called for object no "<<count<<endl;
      count--;
  }
};
int main(){
    cout<<"we are inside the main function"<<endl;
    num n1;
    {
        cout<<"we are inside the bolck"<<endl;
        num n2,n3;
    }
    cout<<"khatam"<<endl;
}

/*in this code when we create the object n1 then constructor is called and then we start the block and the when we declare anything in the block the scope is within the block only
the constructor is claeed for obj n2 and n3
and now the block ended then 
distructer is called nor n2 and n3
now the code is completed the distruter is called for n1 also
if we dont declare the distrutor it call by befault and free the memory
