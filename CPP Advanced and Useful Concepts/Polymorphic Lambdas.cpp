//Polymorphic Lambdas. Lambda function allow us to return the function of auto class by which we can access the function to any particular datatype without the use of the template function.

#include <iostream>

using namespace std;

int main() {
    float n = 4.2;
    // int n=4.2;
    
    // returning a function by auto which is possible of lambda
    auto fun = [](const auto & n) ->auto { return n * 2; };
    auto x = fun(n);
    
    cout << "value of x: " << x << endl;
    
    return 0;
}
