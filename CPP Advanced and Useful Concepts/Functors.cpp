#include<iostream>
using namespace std;

class square{
    int value;
public:
    square(){}
    square(int x):value(x){};
    // this is a functor
    int operator () (int z) const{
        return z*z;
    }
};

int main() {
    // Now you can use it like this:
    const square two(2), three(3), four(4), eight(8);
    std::cout<<"Square of 2 is: "<<two(2)<<std::endl; // create an instance of the functor class and call it
    std::cout<<"Square of 3 is: "<<three(3)<<std::endl;
    std::cout<<"Square of 4 is: "<<four(4)<<std::endl;
    std::cout<<"Square of 8 is: "<<eight(8)<<std::endl;
}
