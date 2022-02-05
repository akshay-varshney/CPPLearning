/* This program shows the:
1. Passing Objects as arguments in functions.
2. Returning Objects from functions.
3. Pointer to Objects.
*/
#include<iostream>
#include<string>
using namespace std;

class platform{
    int str_len;
    std::string str;
public:
    platform(){};
    platform(int x, std::string y):str_len(x),str(y){};
    std::string get_str(){return str;}
    int get_len(){return str_len;}
    
    void display(){
        std::cout<<"The string is: "<<str<<" and length is: "<<str_len<<std::endl;
    }
    // Returning object and also passing the object inside the function.
    platform added(platform & obj, platform & obj2){
        int a1;
        std::string s;
        a1=obj.get_len()+obj2.get_len();
        s=obj.get_str()+ obj2.get_str();
        platform p(a1,s);
        return p;
        
    }
};


int main() {
    platform twitter(7,"twitter");
    platform youtube(7,"Youtube");
    platform newa;
    // calling the object returned function. This will return an object.
    newa=newa.added(twitter, youtube);
    newa.display();
    
    // Calling via pointer
    platform *p11;
    p11=&twitter;
    (*p11).display(); // this is same as calling by arrow function.
    p11->display();
    platform *p12= new platform(9,"instagram");
    p12->display();
    (*p12).display();
    platform *p13;
    platform p14;
    p14=p13->added(*p11, *p12);
    p14.display();
    
    
    
}


