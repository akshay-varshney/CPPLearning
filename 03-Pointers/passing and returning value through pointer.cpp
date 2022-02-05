// Calling and returning a class through pointers

// SOrt an array of 0,1,2

#include<iostream>

using namespace std;

// For array we don't need to add '[]' in input as this is address of variable.
int *separate_1(int *arr, int *n){
    int x=0, y=0,z=0;
    for(int i=0;i<*n;i++){
        if(*(arr+i)==0) x++;
        else if(*(arr+i)==1) y++;
        else z++;
    }
    int i=0;
    while(x>0){
        *(arr+i)=0;
        i++;
        x--;
    }
    while(y>0){
        *(arr+i)=1;
        i++;
        y--;
    }
    while(z>0){
        *(arr+i)=2;
        i++;
        z--;
    }
    return arr;
}

int main() {
    int arr[]={0,2,1,2,0};
    int na=sizeof(arr)/sizeof(arr[0]); // Don't need to call this in form pointer
   
    int *ptr=separate_1(arr, &na); // returning a reference and also passing the refrence
    
    // Printing the array as it returning the reference
    for(int i=0;i<na;i++){
        std::cout<<*(ptr+i)<<" ";
    }
    std::cout<<std::endl;
    
}
