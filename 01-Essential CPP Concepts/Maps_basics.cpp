// This program show the usage of the maps in CPP

#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  mapped;
    mapped["A"] = 98;
    mapped["B"] = 93;
    mapped["C"] = 91;
    mapped["D"] = 95;
    mapped["E"] = 88;
    mapped["F"] = 48;
    // to print the map we can call an iterator
    
    map<string,int> :: iterator iter;
    for (iter = mapped.begin(); iter != mapped.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
 
    return 0;
}
