// This program shows the usage of the constructor in classes.
// Constructor can only be declared inside the puclic section
//They are automatically invoked when the object is created.
//Constructors cannot have a return type. It is used to initialize the object of it's classes.
#include<iostream>

using namespace std;

class ide {
    int a;
    const char *name;
    const char *year;
public:
    ide(int x, const char *a1, const char *a2 ); // Constructor  declaration with having arguments
    void display();
};
// Calling parmaterized constructor with arguments. It is like __init__
ide::ide(int x, const char *a1, const char *a2){
    a=x;
    name=a1;
    year=a2;
}

void ide::display(){
    cout<<"The programming ide is: "<<name<<endl;
    cout<<"You have used "<<a<<" number of times today"<<endl;
    cout<<"This IDE is founded in this: "<<year<<" Year"<<endl;
};

int main(){
    ide xcode(10,"xcode","1990"); //passing the arguments of parameterized constructor.
    xcode.display();
    ide vscode(50,"Visual Studio Code", "1980");
    vscode.display();
    
    return 0;
}

