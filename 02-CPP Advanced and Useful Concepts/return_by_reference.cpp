// This program shows the usage of the returning value by reference in cpp

#include<iostream>
using namespace std;


class val{
public:
    int x;
    int a=1;
    // reference function is declared
    int &value();
    void display(){
        cout<<a<<endl;
    }
};

int& val::value(){
    return a;
}

int main(){
    val x;
    // Here we can assign the function value and it will change the value of a through reference.
    x.value()=11;
    x.display();

}
