// This programm shows the usage of creating your own namespace and it has some classes.
#include<iostream>

// Namespace which can also be used with the classes.
namespace values {
class val{
    std::string val_name;
public:
    void get(std::string a);
    void display();
};
} // This is namespace Values.

// Namespace with declaring any variables which can be used in later part in programm
namespace a {
int x;
}

void values::val::get(std::string a){
    val_name=a;
}
void values::val::display(){
    std::cout<<val_name<<std::endl;
}

int main() {
    values::val v1;
    v1.get("Akshay");
    v1.display();
    a::x=1;
    std::cout<<a::x<<std::endl;
    
    
}
