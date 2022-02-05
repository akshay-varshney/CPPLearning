// L-values: variables which have some kind of storage back in them. L-values references can take only l-values unless they are const.
// R-values: These are temporary values and can take only and r-values can take && these temporary references for r-values.
#include<iostream>


using namespace std;

//lvalue reference &l
//rvalue reference &&r

// This is an l-value reference function in which it will allow the function to set all the values to it
int& value(){
    static int val=10;
    return val;
}

//This function is showing if we try to set the value of this function via l-value or via r-value.
// If we have one reference then it would be treated as a l-value reference and the r-value assignemnet will not work
// If we have two reference then it would be trated as a r-value reference and the l-value assignment will not work
// But if we add const keyword with one reference then both the l-value and r-value refernece will work.

void ste_value(const int& x){
   
}
// Overload the function one has l-value refernece and one has r-value reference
void names(std::string& a1){
    std::cout<<"l-value: "<<a1<<endl;
}
void names(std::string&& a1){
    std::cout<<"r-value: "<<a1<<endl;
}

int main() {
    int x=10;
    value()=100;
    
    ste_value(10);// r-value
    ste_value(x); // l-value
    
    std::string name="Akshay";
    std::string second=" Ridhi";
    std::string both=name+second;
    names(both); // l-value
    names(name+second); // r-value
    
}

// In c++ we have a way to indentify if a value which is passed is a l-value or a r-value. So If one reference is there then it would be a l-value whiile if we add two references then that would be treated as r-value.
