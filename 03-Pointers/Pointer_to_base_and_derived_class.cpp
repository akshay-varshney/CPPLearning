
// Pointer to Derived Class
#include<iostream>
using namespace std;

class parent{

public:
    std::string name;
    void display(){
        cout<<"Base Class name: "<<name<<endl;
    }
};

class child: public parent {
public:
    std::string name_child;
    void display_child(){
        std::cout<<"Child Class name: "<<name_child<<std::endl;
        cout<<"Base Class name: "<<name<<endl;
    }
};

int main() {
    // Creating a pointer variable of base class
    parent *ptr=new parent;
    ptr->name="Parent Class";
    ptr->display();
    //ptr->name_child="a"; // This will give an error cannot access the values of derieved class from the base class.
  
    //creating a pointer varibale to the child class which can access both the derieved and base class
    child *ptrch=new child;

   
    ptrch->name="derived";
    ptrch->display(); // calling base class varibale from the pointer of the derieved class.
    ptrch->name_child="CHildren";
    ptrch->display_child();
    
    

}
