// More about Pointers It shows the usage of the two keywords New and delete with having much more examples of pointers.
#include<iostream>

using namespace std;

// A simple class which takes argument by reference
class values {
public:
    void display(std::string *names){
        std::cout<<"Value is: "<<*names<<std::endl;
    }
};
// A class with constructor takes argument through reference
class values2 {
public:
    string names;
    values2(std::string a){
        names=a;
    }
    void display(){
        std::cout<<"Value is: "<<names<<std::endl;
    }
};


int main() {
    // Dynamic memory allocation of a pointer variable through use of new keyword
    int *ptr= new int(10);
    // To print the value of the pointer we have to dereference the pointer
    cout<<*ptr<<endl;
    // Class with pointers and calling the class function by arrow and decalaring a pointer using new keyword
    values2 *na= new values2("Akshay");
    na->display();
    // Class with pointer without having a constructor
    std::string *s= new std::string("Ridhi");
    values v;
    v.display(s);
    // Pointer to a pointer
    int *x=&(*ptr);
    // Returning the value of the pointer
    cout<<*x<<endl;
    string names[]= {"Akshay", "Ridhi", "Varun"};
    string *n1=names;
    std::cout<<names<<std::endl;
    
    // Returning the values and the address of the n1 pointer
    for(int i=0;i<3;i++){
        std::cout<<n1+i<<" ";
        std::cout<<*(n1+i)<<std::endl;
    }
    
    // Deallocating the values of all the pointers.
    delete ptr;
    delete na;
    delete s;
    
}
