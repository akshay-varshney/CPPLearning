
#include <iostream>
#include <array>
using namespace std;

// print the elements of the array
template<typename T, size_t N>
void print_array(array<T, N> & a) {
    for(T &i : a) cout << i << " ";
    cout << endl;
}

int main() {
    // initializer list
    cout<<"initializer list"<<endl;
    array<int, 5> a1 = { 1, 2, 3, 4, 5 };
    print_array(a1);
    
    // default constructor
    cout<<"default constructor"<<endl;
    array<string, 5> a2;
    a2 = {"one", "two", "three"};
    print_array(a2);
    

    return 0;
}
