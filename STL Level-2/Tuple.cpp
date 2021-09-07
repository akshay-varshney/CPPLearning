
#include <iostream>
#include <tuple>

using namespace std;

// print the elements of the tuple
template<typename T>
void print3tuple(T t) {
    auto tsz = tuple_size<decltype(t)>::value;
    if(tsz != 3) return;
    cout << get<0>(t) << " : " << get<1>(t) << " : " << get<2>(t) << endl;
}

// print a simple message
void message(const char * s) { cout << s << endl; }
void message(const char * s, const int n) { cout << s << ": " << n << endl; }

int main() {
    // initializer list
    message("initializer list");
    tuple<int, string, int> t1 = { 2, "Value2", 1 };
    print3tuple(t1);
    
    // default constructor
    message("default constructor");
    tuple<int, string, int> t2(3, "Value3", 2);
    print3tuple(t2);
    
    // make_tuple
    message("make_tuple");
    auto t3 = make_tuple(4, "Value4", 3);
    print3tuple(t3);
    
    // comparison operators
    message("t1 == t2", t1 == t2);
    message("t1 < t2", t1 < t2);
    message("t1 < t3", t1 < t3);
    message("t1 > t2", t1 > t2);
    message("t2 > t3", t2 > t3);
    
    return 0;
}
