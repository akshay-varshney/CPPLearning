#include<iostream>
#include "First.h"
using namespace std;


int main() {
    std::cout<<"CPP World!"<<std::endl;
    Second val(4);
    std::cout<<"First class and value is: "<<val.get_value()<<std::endl;
    Third th(2);
    th.display();
}
