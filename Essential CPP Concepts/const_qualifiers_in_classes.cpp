//usage of classes which have const declaration
#include<iostream>
using namespace std;
// a very simple class
class Class1 {
    int i = 0;
public:
    void setvalue(int value);
    int getvalue() const; //classes which have const qualifier in their name.
    int getvalue();
};

void Class1::setvalue(int value){
    std::cout<<"this is not constant"<<std::endl;
     i = value;
}
int Class1::getvalue(){
    std::cout<<"this is constant"<<std::endl;
    return i;
}

int Class1::getvalue() const {
    return i;
}
//we can have both with and without const qualifier the same method

int main() {
    int i = 47;
    Class1 o1;
    const Class1 o2; //If object has a const in their name then that can be used by a class which has a const qualifier in their name
    
    o1.setvalue(i);
    
    cout<<"value is "<<o1.getvalue()<<endl;
    cout<<"value is "<<o2.getvalue()<<endl;
    return 0;
}
