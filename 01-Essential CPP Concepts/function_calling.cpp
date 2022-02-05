//This programm will illustrates different ways to call a function in cpp
#include<iostream>
using namespace std;

// This is call by value
void swap(int x, int y){
    int temp;
    temp=y;
    y=x;
    x=temp;
    cout<<x<<y<<endl;
}
// Call by reference
void swap_ref(int &x, int &y){
    int temp;
    temp=y;
    y=x;
    x=temp;
    cout<<"The value of x is: "<<x<<" The value of y is: "<<y<<endl;
}
// Call by reference with pointers
void swap_pointer(int* x, int* y){
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
    cout<<"The value of x is: "<<*x<<" The value of y is: "<<*y<<endl;
   
}

int main(){
    int x=10;
    int y=20;
    swap(x,y);
    swap_ref(x,y);
    swap_pointer(&x, &y); // using pointer and passing the address of the variable.
}
