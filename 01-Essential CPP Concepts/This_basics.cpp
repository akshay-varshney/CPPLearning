// This programm shows the usage of creating your own namespace and it has some classes.
#include<iostream>
using namespace std;

class browse{
    int val;
    std::string str;
public:
    void get_value(int x, std::string str);
    void display();
};

//“This” is basically used pointer to a current object.
void browse::get_value(int x, std::string s){
    val=x;
    str=s;
    cout<<this<<endl; // The address of the b1 will be same as that to "this". 
    this->str="Akshay"; //It is pointing to b1 and can change the values which can be accessed by b1 object
    this->display(); // It can help to call the functions of the class which are accessible to b1 object
    
}

void browse::display(){
    std::cout<<val<<" "<<str<<endl;
}

int main() {
    browse b1;
    cout<<&b1<<endl;

    b1.get_value(1, "xcode");
    b1.display();
}
