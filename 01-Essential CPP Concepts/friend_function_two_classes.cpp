// This code shows the usage of the friend function in much more depth.

// Suppose we want to use the private member of the class then one way is to use it via friend function.

#include<iostream>
using namespace std;
// Forward declaration of a  class
class c1;

class c2 {
public:
    void add_num(c1);
    int number(c1);
};
class c1 {
    int x1;
    int x2;
    // Either we can pass the function of another class as the friend function or we can also make the entire class as friend
//    friend void c2::add_num(c1);
//    friend int c2::number(c1);
    friend class c2;
public:
    void set_number(int a, int b)
    {
        x1=a;
        x2=b;
    }
};

int c2::number(c1 obj){
    for(int i=obj.x1;i<obj.x2;i++){
        cout<<"Value is :"<<i<<endl;
    }
    return 0;
}
void c2::add_num(c1 obj){
    int z=obj.x1+obj.x2;
    cout<<"The sum is: "<<z<<endl;
}
int main() {
    c1 ll;
    ll.set_number(10,14);
    c2 ll2;
    ll2.add_num(ll); // As c1 has functions which are friends with the classs c2 so we can pass the object 
    ll2.number(ll);
}

