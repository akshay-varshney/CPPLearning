// This programm shows the usage of different type of constructors, their properties and destructors.

#include<iostream>
#include<string>
using namespace std;

class browser {
    int num_tabs=0;
    string name;
public:
    //Default Constructor without any Argument
    browser(){
        cout<<"Default Constructor is called"<<endl;
        num_tabs=10;
        name="Chrome";
    }
    //Paramaterized Constructor with having some arguments
    browser(int x, string y);
    // This is a copy constructor what it will do is copy the values of the constructor into another constructor
    browser(browser &obj);
    void display();
    ~browser();
};

// Way to call the constructor outside of the class and passing the arguments and setting the private values.
browser::browser(int x, string y){
    cout<<"This is a paramaterized constructor"<<endl;
    num_tabs=x;
    name=y;
}
// Way to invoke the copy constructor
browser::browser(browser &obj){
    cout<<"This is a Copy Constructor "<<endl;
    num_tabs=obj.num_tabs;
    name=obj.name;
}

void browser::display(){
    cout<<"Name of the browser is: "<<name<<endl;
    cout<<"Total number of tabs opened: "<<num_tabs<<endl;
}

//Destrcutor is called at the end of the program by itself.
browser::~browser() {
    cout<<"Destructor is called "<<endl;
    name="";
    num_tabs=NULL;
    cout<<name<<num_tabs<<endl;
}

int main(){
    browser chrome; // calling default constructor
    chrome.display();
    
    browser firefox(10,"firefox"); // calling the paramaterized constructor
    firefox.display();
    // There are two ways to call the copy constructor
    // Creating an object and passing in form of argument it means invoking the copy constructor.
    browser safari(firefox);
    safari.display();
    // Creating an object and intilize the value it means invoking copy constructor.
    browser ie=firefox;
    ie.display();
}




