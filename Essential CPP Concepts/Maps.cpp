// This program shows the usage of the Map in cpp

#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;
// multimap will allow the duplicate but in case of map dupliate would not be stored instead value will be replaced

int main() {
    map<int,std::string> m1;
    int temp;
    std::string str;
    pair<int, std::string> p;
    
    for(int i=0;i<2;i++){
        cout<<"Enter the key: ";
        cin>>temp;
        cout<<"Enter the value: ";
        cin>>str;
        p.first=temp;
        p.second=str;
        m1.insert(p);
    }
    // Program to print values inside the dictionary.
    
    for(auto i=m1.begin();i!=m1.end();i++){
        cout<<i->first<<" "<<i->second<<" "<<endl;
    }
    //remove an element from the map and it only needs key to remove that particular element
    temp=0;
    cout<<"Enter the key need to be removed: ";
    cin>>temp;
    m1.erase(temp);
    
    for(auto i=m1.begin();i!=m1.end();i++){
        cout<<i->first<<" "<<i->second<<" "<<endl;
    }
}
