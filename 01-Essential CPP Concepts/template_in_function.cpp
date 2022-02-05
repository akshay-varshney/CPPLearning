// This program shows the usage of template in a function.

#include<iostream>

using namespace std;

template<class x, class y>
void swap(x a, y b){
    x temp;
    temp=a;
    a=b;
    b=temp;
    return a+b;
}

int main(){
    int x=1;
    int y=2;
    swap(x,y);
    cout<<"The value of x: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
}
