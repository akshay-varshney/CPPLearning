// This programm shows the usage of defined and conditional if defined stataments

#include<iostream>
using namespace std;
// Macro is a fragment of code which is given some name. It has some identifier and a character sequence

//#define USE_V
#define USE_B

// This directive is the simplest conditional directive. 
#ifdef USE_V
    std::string x="A";
#elif defined USE_Y
    std::string x="B";
#elif defined USE_B
    std::string x="c";
#endif

int main() {
    cout<<x<<endl;
}
