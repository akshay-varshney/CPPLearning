// Lambda Function is an anonymous Function with the ability to refer to an identifier outside of it's scope. Anonymoous means function without a name.
#include<iostream>
#include<vector>

using namespace std;

void fun(std::function<void()> f1){
    f1();
    std::cout<<"f1 is called"<<endl;
}


int main(){
    // Lambda function without Parameters
    int a=10;
    auto first=[](){
        cout<<"first"<<endl;
    };
    // Lambda Function with parametrs
    auto second=[](int x, int y) ->int {
        return x+y;
    };
    first();
    cout<<second(10, 4)<<endl;
    // Capturing varibales for lambda function
    auto third=[a](int x, int y) ->int {
        return x+y+a;
    };
    // If we pass by captured values inside the lambda fuction then we cannot changed the captured values.
    // We have to pass it by reference to allow us to change the value.
    // If we use "=" in capture then it will capture all the values but for this we can't change the value.
    cout<<third(10, 4)<<endl;

    // we can't change captured values in this
    auto fourth=[=](int x, int y) ->int {
        return x+y+a;
    };
    // Here it is reference and we can change the values
    auto fifth=[&](int x, int y) ->int {
        a=100;
        return x+y+a;
    };
    cout<<fourth(10, 4)<<endl;
    cout<<fifth(10, 4)<<endl;
    
    // One Example of Lambda Function in for each
    std::vector<int> v1={1,2,3,4,5};
    int count=0;
    std::for_each(begin(v1), end(v1), [&](int x){
        count+=x;
    });
    cout<<count<<endl;
    
    
    // Lambda function to calling a function
    // This is refering identifiers outside of its own scope
    auto fu=[&](){
        a++;
    };
    
    fun(fu); // only passing a function name and we can perform operations on an variable inside lambda without passing them.
    cout<<a<<endl;
    
    /*
     Captures in Lambda Function
     
     [var] --- capture var by value
     [&var]--- capture var by reference
     [=]--- Capture all by value
     [&]--- Capture all by reference
     [&,var]-[=]--- Capture all by reference and var by value
     [=,&var]-[=]--- Capture all by value and var by reference
     */
    
}
