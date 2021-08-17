// This program will help to understand about Shared Pointers.
// Shared pointer can share the reference with other pointers. Once the use_count is set to 0 the scope of the shared pointer will be eneded.
#include<iostream>
#include<memory>

using namespace std;

class nam{
public:
    std::string name;
    nam(){}
    nam(std::string x):name(x){
        std::cout<<"Constructor is called"<<std::endl;
    }
    void display(std::shared_ptr<nam> & o){
        cout<<name<<endl;
        cout<<"Number "<<o.use_count()<<endl;
    }
    ~nam(){
        cout<<"Destructor is called"<<endl;
    }
    
};

void cop(std::shared_ptr<int> x){
    cout<<"Number "<<x.use_count()<<endl;
    cout<<"Shared Pointer: "<<*x<<endl;
}

int main() {
    // Make a shared
    std::shared_ptr<int>ptr1=std::make_shared<int>(20);
    cout<<"Shared ptr1: "<<*ptr1<<endl;
    cop(ptr1); // Can be copied and hence can be passed by value as well as by reference as well.
    
    std::shared_ptr<nam>ptr2(new nam("First"));
    ptr2->display(ptr2);
    
    ptr2.reset(new nam("Second"));
    ptr2->display(ptr2);
    auto x1=ptr2; // Copy Constructor in shared pointer
    auto x2=ptr2;// This will increase the use count
    ptr2->display(ptr2);
    x1->display(x1);
    x1.reset();
    x2.reset(); // Deallocating memory for copied shared pointers
    ptr2->display(ptr2);
}

