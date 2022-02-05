// This program shows pass and return object from C++ Functions
#include<iostream>
using namespace std;

class matrix{
public:
    int a;
    int b;

    void get_data(int c=0, int d=0){
        a=c;
        b=d;
    }
    
    // C++ Return Object from a Function
    matrix adder(matrix &obj){
        //Just return a object like this:
        /*
         
         Thing calculateThing()
         {
            Thing thing();
            // do calculations and modify thing
            return thing;
         }
         */
        matrix a11;
        a11.a=obj.a;
        a11.b=obj.b;
        return a11;
        
    }
    // C++ Pass Objects to Function
    int values(matrix & obj){
        return obj.a+obj.b;
    }
};

int main() {
    
    matrix m1, m2;
    m1.get_data(4,5);
    m2=m1.adder(m1);
    cout<<m2.a+m2.b<<endl;
    cout<<m2.values(m1)<<endl;
    
}
