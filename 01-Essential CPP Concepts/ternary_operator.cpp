//This sprogram show the usage of the ternary operator in CPP.
#include<iostream>

using namespace std;

int main() {
    int x=10;
    int y=100;
    const char * str= x>y ? "greater": "lesser"; //usage of ternary operator
    std::cout<<str<<std::endl;
}
