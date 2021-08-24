//  If we are including one include inside another then that can lead to include conflict. To avoid this we can add pragam once in our program.

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
