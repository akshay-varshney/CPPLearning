//This programm includes the usage of the structure, enum , typedef, usage of structure

#include "iostream"

using namespace std;


// Creating a structure of employees
struct employee{
    int id;
    const char *name;
    const char *company;
};

//Using typedef which is used to provide an alias to the name.
//enum is a user defined data type which carries values for int
typedef enum :uint {
    A=1.5,
    B,
    C,
} nss;

int main(){
    cout<<"Akshay"<<endl;
    const char *str="Akshay"; //declaring a reference and printing a reference
    cout<<*str<<endl;
    for(int i=0;str[i];i++){
        cout<<str[i]<<endl;
    }
    int i=6;
    fn(i);
    cout<<i<<endl;
    employee e1={1,"Akshay","xyz"}; // Normal declaration of a structure.
    cout<<e1.company<<e1.id<<e1.name<<endl;
    employee e3= {2,"Ridhi","Ax1"};
    employee *e2=&e3; // If the structure is used in form of reference
    cout<<e2->company<<e2->id<<e2->name<<endl;
    nss e11=A;
    cout<<e11<<endl;
    
}
