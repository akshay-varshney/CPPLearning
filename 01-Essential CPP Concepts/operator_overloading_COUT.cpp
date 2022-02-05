// This programm shows operator overloading. How we can create our own operator.
// This shows the example of COUT.

#include<iostream>
#include<string>

using namespace std;

class platforms{
public:
    const char *name="Twitter";
    void display(const char *Name){
        name=Name;
        cout<<name<<endl;
    }
};
//Creating the ostream, first argument would bve operator abd second argument would be reference to the object
ostream& operator<<(ostream& COUT, platforms &plat){
    COUT<<plat.name<<endl;
    return COUT;
}

int main()
{
    platforms p1;
    p1.name="Instagram";
    platforms p2;
    p2.name="Facebook";
    
    cout<<p1<<p2; // Printing the operators according to user defined.
    operator<<(cout,p1); // We can also invoke the operator function by the following lines of code.
}
