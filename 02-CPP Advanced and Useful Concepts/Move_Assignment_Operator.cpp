
// Move assignment operator: It is something that we want to include in our class When you include the move constructor because it might be deriable to move the object into an variable.
#include<iostream>
using namespace std;

class IDE{
private:
    string *name;
public:
    IDE(string x){
        name=new string;
        *name=x;
        cout<<"constrctor"<<endl;
    }
    IDE(){}
    IDE(IDE &obj):IDE(*obj.name){
        cout<<"Copy constrcuotr"<<endl;
    }
    // Move Constructor, it has noexcept keyword that prevents object to leave in unkown state. When you move Constructor you must have that noexcept qualifier
    IDE(IDE && obj) noexcept{ // Move Constructor is declared with the r-value reference.
        cout<<"Move Constructor is called"<<endl;
        name=std::move(obj.name); // We are calling move to here to specify these are movable.
        obj.name=nullptr; // It is important to free memory of move constructor at end
    }
    ~IDE(){
        cout<<"destructor is called"<<endl;
    }
    // Move assignment operator
    IDE& operator=(IDE && obj) noexcept {
        // here we are freeing memory of delete and assigning to new
        if(this!=&obj){
            delete  name;
            cout<<"Move Constructor is called"<<endl;
            name=obj.name; // We are calling move to here to specify these are movable.
            obj.name=nullptr; // It is important to free memory of move constructor at end
        }
        return *this; //value to current object
    }
    void display(){
        cout<<*name<<endl;
    }
};

IDE name(IDE n){
    return n;
}



int main(){
    IDE xcode("XCODE");
    xcode.display(); // simple constructor will be called for this case
    IDE v2; // Copy constructor would be called and it created a copy of the varibale
//    v2.display();
    v2=std::move(xcode); // This is move assignment
    v2.display();

    IDE v=std::move(v2); //This is move constructor

    v.display();
    
    //std::move is used when you want to move or convert an object to temporary.
}
