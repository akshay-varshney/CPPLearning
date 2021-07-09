//This programm show the scope/usage of the private and public members inside the class
#include<iostream>

using namespace std;

class Employee{
    // Private variable can only be accessed by the function of the function of the class cannot be used individually inside main
private:
    int a;
    int b;
    int c;
  //Public can be used by any methods or objects
public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }

};

void Employee::setData(int a1, int b1, int c1){
    a = a1; // Private member can be used inside function
    b = b1;
    c = c1;
}

int main() {
    Employee Akshay;
    Akshay.setData(19, 20, 30);
    //Akshay.a=11;  This would not be possible as the a is a private member
    Akshay.d=40;
    Akshay.e=60;
    Akshay.getData();
}
