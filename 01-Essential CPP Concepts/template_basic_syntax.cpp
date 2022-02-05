// This program will show the usage of the templates in cpp.
// Template is basically a declaration in which we can use the same class for different data types.


#include<iostream>
using namespace std;

// template syntax
template <class d>
class names{
public:
    // Now whereever we have to use the declaration we'll use this template class name.
    d n;
    names(d x){
        n=x;
    }
    d display(){
        return n;
    }
};

int main() {
    // passing template class through string
    names<std::string> akshay("Akshay");
    cout<<akshay.display()<<endl;
    // passing template class through integer.
    names<int> a1(10);
    cout<<a1.display()<<endl;
}
