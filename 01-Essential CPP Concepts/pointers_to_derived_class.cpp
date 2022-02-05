// This program shows the usage of pointer to the derived class.
// For the derieved class it can access the variable & function of base class and also has the ability to change those values

#include<iostream>
using namespace std;


class rational {
public:
    int rational_num;
    void display(){
        cout<<"Rational Number is: "<<rational_num<<endl;
    }
};

class irrational: public rational {
public:
    float irrational_num;
    void display() {
        cout<<"Irrational number is "<<irrational_num<<endl;
        cout<<"Rational: "<<rational_num<<endl;
    }
};

int main() {
    
    rational *ptr2= new rational; // Pointer to the rational class
    ptr2->rational_num=100;
    ptr2->display();
    //ptr2->irrational_num=0.1111111; // Will throw an error
    
    irrational *ptr=new irrational; // Pointer to the derieved class
    ptr->rational_num=10;
    ptr->irrational_num=0.1111111;
    ptr->display();

}
