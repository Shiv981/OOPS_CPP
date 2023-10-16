#include <iostream>
using namespace std;

/*
  Polymorphism is define as present in many forms
  
                            overlading
  in the code we use speak as a funtion in 2 places but if you want to overload
  the either the number of argument is changed or type of argument should
  be change 
      
*/

#include <iostream>
using namespace std;

class clas {
public:
    void speak() {
        cout << "Hello bro" << endl;
    }
    void speak(string str) {
        cout << str << endl;
    }
};

int main() {
    clas d;
    d.speak();          
    d.speak("shiv");    
}



