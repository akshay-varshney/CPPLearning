// This program shows about the function members

#include<iostream>
using namespace std;

class value{
public:
    int ia;
    void set_value(int z);
    // Non-const qualifier if the object doesn't have any const qualifier then this function will be called.
    void get_value();
    // const qualifier if the object have Const qualifier then this function will be called.
    void get_value() const;
    
};

void value::set_value(int z){
    ia=z;
}
void value::get_value(){
    cout<<"Non-const is called: ";
    std::cout<<ia<<std::endl;
}
void value::get_value()const{
    cout<<"const is called: ";
    std::cout<<ia<<std::endl;
}

int main() {
    
    value v1;
    v1.set_value(10);
    v1.get_value();
    const value v2=v1;
    v2.get_value();
    return 0;
}
