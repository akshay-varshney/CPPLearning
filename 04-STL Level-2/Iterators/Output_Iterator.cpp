//
//  main.cpp
//  CPP
//
//  Created by Akshay Varshney on 09/09/21.
//

// Output Iterator

#include<iostream>
#include<iterator>

using namespace std;

int main() {
    ostream_iterator<int> output(cout, " ");
    
    for(int i : {1,2,3,4,5}) {
        *output++ = i;
    }
    cout << endl;
}
