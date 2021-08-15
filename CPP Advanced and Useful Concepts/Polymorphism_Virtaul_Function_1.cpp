// Run Time Polymorphism: Function having more then one more form is called polymorphisim.
// Run time polymorphism is achieved by using virtual function.
// The function which have virtual added that will help to decide which function will run in runtime.

#include<iostream>
using namespace std;

class parent{

public:
    std::string name;
    // Runtime this will not run this display function but it will invoke the display function of the derived class when base pointer pointing to derieved class.
    virtual void display(){
        cout<<"Base Class name: "<<name<<endl;
    }
};

class child: public parent {
public:
    std::string child_name;
    void display(){
        std::cout<<"Child Class name: "<<child_name<<std::endl;
        cout<<"Base Class name: "<<name<<endl;
    }
};

int main() {
    // Creating a pointer variable of base class
    parent *ptr=new parent;
    ptr->name="Parent Class";
    child chtrr;
    ptr->display();
    
    ptr=&chtrr; // base class pointer pointing to derieved class.
    ptr->name="Akshay";
    ptr->display(); // If we don't add the virtual before the function name in base class then the derieved class display method would not be called but the base class display function would be called.
    child *ptr2= new child;
    ptr2->child_name="a";
    ptr2->display(); // Pointer to derieved class.
    ptr->display();

}
