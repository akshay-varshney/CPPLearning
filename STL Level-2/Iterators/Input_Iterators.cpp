//
//  main.cpp
//  CPP
//
//  Created by Akshay Varshney on 09/09/21.
//

// Input Iterator it is used to get the values from the object once and it used to increment.

#include<iostream>
#include<iterator>

using namespace std;

int main() {
    double val1=0,val2=0;
    
    //iostream object uses an input iterator known as cin
    cout << "Two numeric values: " << flush;

    istream_iterator<double> Endd;         // default constructor for end-of-stream
    istream_iterator<double> iter(cin);    // stdin iterator

    if(iter == Endd) {
        std::cout<<"no Val1"<<std::endl;
        return 0;
    } else {
        val1 = *iter++;
    }
    
    if(iter == Endd) {
       std::cout<<"no Val2"<<std::endl;
        return 0;
    } else {
        val2 = *iter;
    }

    cin.clear();
    cout << val1 << " + " << val2 << " = " << val1 + val2 << endl;

    return 0;
   

}
