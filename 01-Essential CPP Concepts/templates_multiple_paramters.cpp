// This programm shows the usage of templates with multiple paramteres.

#include<iostream>
using namespace std;

// To take multiple number of classes we can add number of templates like this.
template <class t1, class t2>
class values {
    t1 data1;
    t2 data2;
public:
    values(t1 a, t2 b){
        data1=a;
        data2=b;
    }
    void display() {
        cout<<"The value os data 1 is: "<<data1<<endl;
        cout<<"The value of data 2 is: "<<data2<<endl;
        
    }
};
// we can pass different datatype to a single template.
int main() {
    values<int, std::string> obj(1,"Akshay");
    obj.display();
}
