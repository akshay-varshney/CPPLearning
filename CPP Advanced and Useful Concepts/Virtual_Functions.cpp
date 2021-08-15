// This program shows the usage of virtual function in c++
// Also this is showing in an exmaple how polymorphism is achieved.

#include<iostream>

using namespace std;

class Laptop {
protected:
    std::string name;
    int rating;
    Laptop(){}
public:
    Laptop(std::string x, int r):name(x),rating(r){}
    // If the base class pointer is pointing to any derived class then it would call that subsequent derived class method
    virtual void display() {
        std::cout<< "The brand of the laptop is: "<<name<<std::endl;
        std::cout<<"Overall rating is: "<<rating<<std::endl;
    }
    
};

class Mouse:public Laptop {
    int mouse_Rating;
public:
    Mouse(){};
    Mouse(std::string name, int rating,int m):Laptop(name,rating),mouse_Rating(m){}
    void display() {
        std::cout<< "The brand of the laptop is: "<<name<<std::endl;
        std::cout<<"Overall rating is: "<<rating<<std::endl;
        std::cout<<"Mouse Rating is: "<<mouse_Rating<<std::endl;
    }
};

class Keyboard:public Laptop {
    int keyboard_Rating;
public:
    Keyboard(){};
    Keyboard(std::string name, int rating, int m):Laptop(name,rating),keyboard_Rating(m){}
    void display() {
        std::cout<< "The brand of the laptop is: "<<name<<std::endl;
        std::cout<<"Overall rating is: "<<rating<<std::endl;
        std::cout<<"Keyboard Rating is: "<<keyboard_Rating<<std::endl;
    }
};

int main() {
    Laptop *Apple= new Laptop("Apple", 10); // Base class object
    Apple->display(); // same as  (*Apple).display();
    Mouse m1("lenovo",9,4);
    Mouse *m12=new Mouse("lenovo",9,4);
    Apple=&m1; // Base class pointing to derieved class.
    Apple->display(); // Display of derieved class would be called as we have placed virtual in base class function.
    m12->display();
    
    Keyboard k1("HP",8,5);
    Apple=&k1;
    Apple->display();
    
    Keyboard *k12=new Keyboard("Microsoft",5,1);
    k12->display();
    
    
    
    
    
    
}




