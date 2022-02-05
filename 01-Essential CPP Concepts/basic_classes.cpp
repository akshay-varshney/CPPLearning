// Basic usage of classes in cpp with private and public memeber
#include<iostream>
using namespace std;

class values{
private:
    int z=10;
public:
    void val(int z){
        cout<<z<<endl;
    }
};

int main() {
    values v1;
    v1.val(10);
    
}
