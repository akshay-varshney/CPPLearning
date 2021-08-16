// This program will help to understand about Unique Pointers.
// There will be only one pointer and that cannot be copied. Also it cannot be passed to a function by call by value as it makes the copy
#include<iostream>
#include<memory>

using namespace std;

class nam{
public:
    std::string name;
    nam(){}
    nam(std::string x):name(x){}
    void display(){
        cout<<name<<endl;
    }
    
};

void cop(std::unique_ptr<int> &x){
    cout<<"Unique Pointer: "<<*x<<endl;
}
int main() {
    // Creating a unique pointer through the use of new keyword
    std::unique_ptr<int>name=std::make_unique<int>(10);
    std::cout<<*name<<endl; // Calling the value of the unique pointer
    cop(name); // Note here we cannot call by value. We have to pass the reference.
    
    std::unique_ptr<nam>ptr(new nam("Akshay")); // Unique pointer of default type
    ptr->display();
    
    auto b = std::make_unique<nam>("two"); // Another way of calling unique pointer
    b->display();
    ptr.reset(new nam("three")); // Reseting the value to a new value.
    ptr->display();
    
    auto c = std::move(b); // Cannot copy but we can move the value of Unique
    c->display();
}
