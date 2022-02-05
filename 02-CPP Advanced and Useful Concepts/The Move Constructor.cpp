#include<iostream>
using namespace std;

class IDE{
private:
    string name;
public:
    IDE(string x):name(x){
        cout<<"constrcuotr"<<endl;
    }
    IDE(){}
    IDE(IDE &obj):name(obj.name){
        cout<<"Copy constrcuotr"<<endl;
    }
    // Move Constructor, it has noexcept keyword that prevents object to leave in unkown state. When you move Constructor you must have that noexcept qualifier
    IDE(IDE && obj) noexcept{ // Move Constructor is declared with the r-value reference.
        cout<<"Move Constructor is called"<<endl;
        name=std::move(obj.name); // We are calling move to here to specify these are movable.
        obj.name=""; // It is important to free memory of move constructor at end
    }
    ~IDE(){
        cout<<"destructor is called"<<endl;
    }
    void display(){
        cout<<name<<endl;
    }
};

IDE name(IDE n){
    return n;
}

int main(){
    IDE xcode("XCODE");
    xcode.display(); // simple constructor will be called for this case
    IDE v2=xcode; // Copy constructor would be called and it created a copy of the varibale
    v2.display();
    // Passing the r-value reference and calling the move constructor
    IDE v=std::move(xcode); //This is same as by calling this way (IDE&&)(xcode)
    std::string x="VSCODE";
    IDE v3=name(x); // Return value is a r-value and it calls the move constructor
    v.display();
    v3.display();
    
}
