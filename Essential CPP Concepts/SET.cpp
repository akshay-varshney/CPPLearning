// This program shows the usage of the set in cpp

#include<iostream>
#include<unordered_set>

using namespace std;
// Set won't contain duplicates it will remove all duplicate and arrange them in order
// Multiset will contain duplicate as well

int main() {
    unordered_set<int> set1;
    int temp;
    
    for(int i=0;i<5;i++){
        cout<<"enter numbers: ";
        cin>>temp;
        set1.insert(temp);
    }
    //If we want to erase the content then we can use
    temp=0;
    cout<<"enter numbers to be erased: ";
    cin>>temp;
    set1.erase(temp);
    for(auto i=set1.begin();i!=set1.end();i++){
        cout<<*i<<endl;
    }

    return 0;
}
