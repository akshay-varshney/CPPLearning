// Basic usage of Friend Function in a single class.
//A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. (Definition taken from tutorialpoint website.)


#include<iostream>

using namespace std;

class document {
    int num;
    const char *name;
public:
    //Declaration of a friend function. It Usually contains the objects as arguments
    friend void document_status(document obj);
    void set_document(int x, const char *s1){
        num=x;
        name=s1;
    }
};
// Friend Function can be invoked without the help of any object.
void document_status(document obj){
    cout<<obj.name<<endl;
    cout<<obj.num<<endl;
}

int main(){
    document d1;
    d1.set_document(10, "google_doc");
    document_status(d1); // It cannot access the members directly by their names and need object_name.member_name to access any member. Need to pass the object itself in this way.
}
