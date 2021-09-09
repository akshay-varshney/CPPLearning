//
//  main.cpp
//  CPP
//
//  Created by Akshay Varshney on 09/09/21.
//

// Iterator is an STL object that can iterate through the elements of the array.
// An iterator acts a lot like a pointer. It can be incremented dereferenced decremented.

#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v1 = { 1,2,3,4,5,6,7 };
    vector<int>::iterator it1;
    vector<int>::iterator it1_beg=v1.begin();
    vector<int>::iterator it2_end = v1.end();
    for (it1 = it1_beg; it1 < it2_end; it1++) {
        std::cout << *it1 << std::endl;
    }

}
