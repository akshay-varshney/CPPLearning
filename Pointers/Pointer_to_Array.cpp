// Pointer is a variable of particular data type to hold the address of the varibale which has same data type as our pointer.

#include<iostream>
using namespace std;

int main() {
    
    // Pointer to the Strings
    std::string num="Akshay";
    std::string *ptr;
    ptr=&num;
    cout<<*ptr<<endl;
    
    // Pointer to the array
    
    int arr[10];
    int *p=arr; //define a pointer to the array
    // we don't need to use the reference opertor to store the address but we can directly use the array name
    // This is beacuse array actually contain the address of the first element in the array.
    // so we don't need to call the addresss because it already has the address in the variable.
    std::cout<<arr<<std::endl;
    std::cout<<*p<<std::endl;
    
    
    // Print the address of the array
    // *ptr=*ptr+i*size_of_variable
    for(int i=0;i<10;i++){
        std::cout<<" The address at "<<i<<"is: "<<p+i<<endl;
    }
    
    
}
