// This program shows the usage of the single Inheritance in CPP
#include<iostream>

using namespace std;
// Base class with paramterized constructor
class IDE{
    std::string name;
public:
    IDE(std::string x):name(x){};
    std::string get_data(){return name;}
    
};

// Dervied class with paramaterized constructor
class details:public IDE{
public:
    
    std::string usage;
    int z;
    details(std::string n,std::string y, int q):IDE(n),usage(y),z(q){}
    void display();
};

class languages:public IDE{
    // Class is being derived publically
public:
    std::string str;
    languages(std::string n, std::string (n1)):IDE(n),str(n1){};
    
    void lang(){
        cout<<"Your IDE"<<get_data()<<" is used for: "<<str<<endl;
    }
};

void details::display(){
    cout<<"IDE name is: "<<get_data()<<" It is used for: "<<usage<<" It is used by "<<z<<" users."<<endl;
    
}

int main() {
    // We just need to call the derieved class
    details d1("Xcode","macos",122);
    d1.display();
    languages l1("Visual Studio", "CPP");
    l1.lang();
    
}
