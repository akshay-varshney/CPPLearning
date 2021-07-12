// This program shows the usage of pointers in objects and classes. This will include the usage of new keyword in pointers.

#include<iostream>
using namespace std;

class even {
    int var;
public:
    even(int z){
        var=z;
    }
    void print_even(){
        for(int i=0;i<var;i++){
            if(i%2==0){
                cout<<"Even Number: "<<i<<endl;
            }
        }
    }
    
};

class odd {
    int var2=12;
public:
    void print_odd(int var2){
        for(int i=0;i<var2;i++){
            if(i%2!=0){
                cout<<"Odd Number: "<<i<<endl;
            }
        }
    }
    
};

int main() {
//    even n1(11); // This is without the use of new directly creating an object and then referencing it with the pointer variable
//    even *ptr=&n1;
//    (*ptr).print_even();
    // To call the ptr with new keyword we have to use the class name and by default if no constructor it will assign it to default constructor.
    even *ptr=new even(10); //  This is same as   even n1(11) & even *ptr=&n1;
    odd *ptr2 = new odd;
    // Note to call function using pointer note we don't need to use the dereference operator as the class is not a pointer class.
    ptr->print_even(); // This is same with (*ptr).print_even(); 
    //(*ptr).print_even();
    
    ptr2->print_odd(10);
    //(*ptr2).print_odd(15);
    
    
    
}
