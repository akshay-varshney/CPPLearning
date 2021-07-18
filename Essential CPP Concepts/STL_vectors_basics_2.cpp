// This program shows the usage of different STL vectors used in int and string

#include<iostream>
#include<vector>

using namespace std;

int main() {
    std::vector<int> x= {12,44,55,11,33,11};
    std::cout<<x.size()<<endl;
    std::cout<<x.front()<<endl;
    std::cout<<x.back()<<endl;
    std::cout<<"Looped"<<std::endl;
    // Range based for loop
    for(auto i: x){
        std::cout<<"The value in range base for loop: "<<i<<endl;
    }
    // Use of Iterators in vector
    std::vector<int>::iterator iter=x.begin();
    std::vector<int>::iterator itend=x.end();
    for(auto i=iter;i<itend;i++){
        std::cout<<"The value in Iteration is: "<<*i<<endl;
    }
    
    // Display the value at specific poistion
    std::cout<<"The value at position 4 is :"<<x[4]<<endl;
    std::cout<<"The value at position 2 is : "<<x.at(2)<<endl;
    
    //Insert the elment at given position:
    std::cout << "insert 42 at begin + 5: " << std::endl;
    x.insert(x.begin() + 5, 42);
    for(auto i: x){
        std::cout<<"The value in range base for loop: "<<i<<endl;
    }
    
    // Strings
    std::vector<std::string> s= {"Akshay", "Ridhi"};
    for(auto i:s){
        std::cout<<i<<endl;
    }
    
    for(const std::string & v : s) {
           std::cout << v << std::endl;
       }
}

