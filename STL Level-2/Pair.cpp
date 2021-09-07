// This program shows the usage of the pair in cpp.

#include<iostream>
#include<utility>

using namespace std;

template<class T1, class T2>
void print_pair(pair<T1 , T2> &p){
    std::cout<<p.first<<" and value is: "<<p.second<<std::endl;
    
}

int main(){
    pair<std::string, int> p1={"Akshay",1};
    print_pair(p1);
    
    pair<int, string> p2(2, "Value");
    print_pair(p2);
    
    pair<int, string> p3;//make pair
    p3 = make_pair(3, "Value3");
    print_pair(p3);
    
}
