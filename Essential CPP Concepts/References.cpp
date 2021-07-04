//This programm includes details about referencing in CPP. It also include the usage of auto in CPP.

#include<iostream>

using namespace std;


//A reference variable is an alias, that is, another name for an already existing variable. 
//Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.

//Declaring the reference variable in cpp:
//int& r = i;


// referencing a function 
int fun(int &x, int &y){
    int z= x+y;
    return z;
}
// Returning a function through referencing
int c[]={1,2,3,4,5};
int & func(int x){
    return c[x];
}

int main() {
    int a=10, b=12;
    cout<<fun(a,b)<<endl;
    func(2)=10;
    int n=sizeof(c)/sizeof(c[0]);
    for(int i=0;i<n;i++){
        cout<<c[i]<<endl;
    }
    // using auto to automatically detect the type of the variable
    for(auto i=0;i<10;i++){
        cout<<i<<endl;
    }
}
