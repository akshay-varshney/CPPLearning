// This Programm shows the usage of the constructor inside inhertiance.


#include<iostream>
using namespace std;

class c11{
protected:
    int c11_data;
  
public:
    c11(int data1, const char *name){
        c11_data=data1;
        cout<<name<<endl;
        cout<<"c11 constructor called "<<endl;
    }
    void print_c11(){
        cout<<"The value in c11 class is: "<<c11_data<<endl;
    }
};

class c12 {
protected:
    int c12_data;
  
public:
    c12(){
        c12_data=11;
        cout<<"c12 constructor called "<<endl;
    }
    void print_c12(){
        cout<<"The value in c12 class is: "<<c12_data<<endl;
    }
};

class c13: public c11, public c12 {
public:
    int a;
    int b;
    //If we are deriving any class we have to match all the base class constructor and must pass the same number of attribute
    c13(int x1, int x2, const char *ame): c11(x1,ame), c12(){
        a=x1;
        b=x2;
        cout<<"c13 constructor is called"<<endl;
    }
    void print_c13(){
        for(int i=a;i<b;i++){
            cout<<"The values in c13 classes are: "<<i<<endl;
        }
    }
};

int main() {
    // Calling all the functions from base class by using object of the derieved class
    c13 al(1,6,"Akshay");
    al.print_c11();
    al.print_c12();
    al.print_c13();
}
