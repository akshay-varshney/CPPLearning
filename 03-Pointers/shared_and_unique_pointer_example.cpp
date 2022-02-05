#include<iostream>
#include<memory>

using namespace std;

void swap(std::shared_ptr<int>ptr1,std::shared_ptr<int>ptr2){
    std::unique_ptr<int>name=make_unique<int>();
    *name=*ptr2;
    *ptr2=*ptr1;
    *ptr1=*name;
    
}

int main() {
    std::shared_ptr<int>ptr1=make_shared<int>(12);
    std::shared_ptr<int>ptr2=make_shared<int>(110);
    swap(ptr1,ptr2);
    cout<<*ptr2<<endl;
    cout<<*ptr1<<endl;
    
    
}
