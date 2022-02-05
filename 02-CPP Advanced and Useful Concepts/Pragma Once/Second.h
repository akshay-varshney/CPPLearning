
#pragma once

#include "First.h"

class Third{
private:
    int z;
public:
    Third(int a):z(a){}
    void display(){
        std::cout<<"Second class and value is: "<<z<<std::endl;
    }
};

