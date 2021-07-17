// This Program shows the basic usage of STL Vectors in CPP
// Useful website to learn more about this: https://www.cplusplus.com/reference/vector/vector/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    // Declaring a integer vector
    vector<int> v1;
    for(int i=0;i<4;i++){
        v1.push_back(i);
    }
    for(int i=0; i<4;i++){
        cout<<v1[i]<<endl;
    }
    // Different Vector Functions on an string
    vector<std::string>v2(4);
    string x="a";
    v2[0]="Akshay";
    for(int i=1; i<4;i++){
        v2.at(i)="A"+ std::to_string(i);
        cout<<v2[i]<<endl;
    }
    cout<<v2.front()<<endl;
    v1.pop_back();
}
