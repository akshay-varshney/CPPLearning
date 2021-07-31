// This program shows the call by reference
#include<iostream>
using namespace std;

// This function takes both the argument as pointer
int summed(int * arr, int *n){
    int count=0;
    for(int i=0;i<*n;i++){
        count+=*(arr+i);
    }
    return count;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // passing the value as reference
    std::cout<<summed(arr,&n)<<endl;
}

// When we pass a value to a function and we are passing a pointer that whatever changes waht we made
//in the function are also made in the original value

