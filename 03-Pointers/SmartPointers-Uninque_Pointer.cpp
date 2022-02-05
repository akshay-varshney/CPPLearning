// Smart Pointers: essentially a wrapper for a raw pointer.
//Advantage with Smart Pointer is taht they deallocate the memory automatically.

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
//Uninque pointer cannot be copied from one pointer to anothe. They can be moved.
    unique_ptr<int> up1=make_unique<int>(21);
    unique_ptr<int> up2=move(up1);

    std::cout<<up2<<endl;
    std::cout<<*up2<<endl;
//    std::cout<<*up1<<endl; here in this line we already deallocated the reference of up1 so an exception would be thrown.
    {
     
        // Constructor would be called here.
    unique_ptr<values> vpt1=make_unique<values>();
        cout<<"a"<<endl;
    // Unique pointer will get deallocated at the end of the scope.
        // Destructor will be called here and vpt1 would no longer exsist in memory if we try to run it then expection would be thrown.
    }
    cout<<"b"<<endl;
}
