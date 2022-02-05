//This program shows basic usage of std::move function in c++
// Without creating the actual copy of the object we are transferring the value.

#include<iostream>
#include<vector>
using namespace std;

void display(std::vector<std::string> v){
    for(string i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int func(int x,int y){
    return x+y;
}


int main() {
    vector<string> v1={"Python","C++","JavaScript"};
    vector<string> v2={"Xcode","VS-code","Sublime"};
    display(v1);
    display(v2);
    auto v3=std::move(v2); // Without copying transfering value. Now v2 will be null
    display(v1);
    display(v2);
    display(v3);
    int x=1;
    int y=2;
    cout<<func(std::move(x), std::move(y))<<endl; // we can transfer the value to the function as well.
    
    
    
}
