//This Programm shows the Inheritance, how we can use the inheritance
//syntax to inherit the class:
//class derived_class_name : visibility_mode base_class_name

/*
 1. Default visibility mode is private
 2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
 3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
 4. Private members are never inherited

 */

#include<iostream>
using namespace std;

class editor{

public:
    int x1;
    void set_value(int z){
        x1=z;
    }
    void display(){
        cout<<x1<<endl;
    }
};

// Inheriting the editor class in public visibility mode
class response: public editor {
public:
    void get_data(){
        cout<<"Derived Value: "<<x1*2<<endl;
    }

};

int main() {
    // We can use the derieved class to directly call the functions from the base as well as derived class. While vice versa is not true.
    
    response e1;
    e1.set_value(10);
    e1.display();
    e1.get_data(); //Derived class function
}


