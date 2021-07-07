
//This programm will illustrates show the function overloading in cpp and it will automatically figure out which function to use
#include<iostream>
#include<cmath>
using namespace std;


// volume of a cube
double volume( double a ) {
    cout<<"cube of "<<a<<endl;
    return a * a * a;
}

// volume of a cylinder
double volume( double r, double h ) {
    cout<<"cylinder of x "<<r<<h<<endl;
    return M_PI * r * r * h;
}




int main() {
    cout<<"volume of a 2 x 2 x 2 cube: "<<volume(2.0)<<endl;;
    cout<<"volume of a cylinder, radius 2, height 2: "<<volume(2.0, 2.0)<<endl;
    return 0;
}
