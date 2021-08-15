// This program is about another type of smart pointer which is: Shared Pointer

#include<iostream>
#include<memory>
using namespace std;

int main() {

        // When you going to assign a specific memory location to shared  pointer that is going to increase the number of owners of that memory location while in case of weak pointer if we assign the same memory location to another pointer it will not going to increase it;s owner.
        // We use weak pointer in order to observe objects in memory but a weak pointer won't keep that object alive if nothing else needs it where as shared pointer will keep that object alive.
    weak_ptr<int> wp1;
    {
        shared_ptr<int> shpt1=make_shared<int>(20);
        wp1=shpt1;
        cout<<*shpt1<<endl;
        // The refernce of the weak pointer is alive inside of this scope after this scope it will keep the refernce of deallocated memory.
    }
}


