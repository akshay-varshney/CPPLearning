
#include<iostream>
using namespace std;
// C++ classes and struct are identical there is only one key difference.
// Key difference between the struct and Classes is that all member default to public in structure
// while in classes all the membere default to private
struct A {
    int ia;
    const char * sb = "";
    int ic;
};

class B{
public:
    int ia;
    const char * sb = "";
    int ic;
};


int main() {
    // calling the struct
    A a;
    a.ia = 1;
    a.sb = "two";
    a.ic = 3;
    std::cout<<a.ia<<" "<<a.sb<<" "<<a.ic<<endl;
    // calling the class
    B b;
    b.ia = 1;
    b.sb = "two";
    b.ic = 3;
    std::cout<<b.ia<<" "<<b.sb<<" "<<b.ic<<endl;;
    
    return 0;
}
