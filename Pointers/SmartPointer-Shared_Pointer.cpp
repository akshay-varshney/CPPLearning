// This program is about another type of smart pointer which is: Shared Pointer

#include<iostream>
#include<memory>
using namespace std;


class values {
public:
    values() {
        cout<<"constructor"<<endl;
    }
    ~values() {
        cout<<"Destructor"<<endl;
    }
    
};
int main() {
//
    {
        // To decalre the shared pointers
    shared_ptr<values> sht1=make_shared<values>();
        // It will display the count by how much times a pointer is being shared
    cout<<"Number of times shared pointer used: "<<sht1.use_count()<<endl;
        {
            shared_ptr<values> sht2=sht1;
            cout<<"Number of times shared pointer used: "<<sht1.use_count()<<endl;
            // scope of sht2 is going to end so that's why number would going to reduce by 1
        }
        cout<<"Number of times shared pointer used: "<<sht1.use_count()<<endl;
}
}

//For shared pointers memory would be deallocated once the scope of all the shared pointers end.
