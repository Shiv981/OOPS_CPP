
#include <iostream>
using namespace std;
/* when we talk about code reusebility then the concept of template is very inportant 
ex= if there is a class of vector then we need to specify the datatype of the vector 
so we need to declare tha class for each data type `but all the functions are same 
so this dont follow code reusebility so we need template
*/
template <class T>
class Vector {
public:
    int size;
    T* arr; 
    Vector(int size) {
        this->size = size;
        arr = new T[size];
    }

    T sum() {
        T s = 0;
        for (int i = 0; i < size; i++) {
            s += arr[i];
        }
        return s;
    }
};

int main() {
    Vector<float> v(3); //need to specify the data ; 
    v.arr[0] = 2.3;
    v.arr[1] = 12.4;
    v.arr[2] = 17.1;
    float a = v.sum();  
    cout << "Sum: " << a << endl;
    return 0;
}
