// Bidirectional Iterators:: These iterators can help to move forward and backward.
#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> set1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    set<int>::iterator iter1;   // iterator object

    // iterate forward
    for(iter1 = set1.begin(); iter1 != set1.end(); iter1++) {
        std::cout << *iter1 << " "<<" ";
        
    }
    std::cout<<std::endl;
    
    // iterate backward
    for(iter1 = set1.end(); iter1 != set1.begin();) {
        std::cout << *--iter1 << " ";
    }
    std::cout<<std::endl;
}
