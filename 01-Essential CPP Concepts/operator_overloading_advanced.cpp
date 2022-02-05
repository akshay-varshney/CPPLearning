// This programm shows operator overloading. How we can create our own operator.
// This shows the example of for plus and cout

//In this example we have taken two objects one from struct and one from class and we want to add the attributes into a  list

#include<iostream>
#include<string>
#include<list>

using namespace std;

class platforms{
public:
    const char *name="Twitter";
    void display(const char *Name){
        name=Name;
        cout<<name<<endl;
    }
};
//Creating the ostream, first argument would bve operator abd second argument would be reference to the object
ostream& operator<<(ostream& COUT, platforms &plat){
    COUT<<plat.name<<endl;
    return COUT;
}

// Second Strcut class which has a list and in this list all the paramters of the first class would be added by using plus symbol.
struct mycode {
    list<platforms>pp1;
    // Adding the first class by using function which has been added by use of this keyword.
    void operator+=(platforms &plat){
        this->pp1.push_back(plat);
    }
};

// Creating an output stream to print the struct function using cout
ostream& operator<<(ostream& COUT, mycode &m1){
    for(platforms plat:m1.pp1){
        COUT<<plat<<endl;
    }
    return COUT;
}

int main()
{
    platforms p1;
    p1.name="Instagram";
    platforms p2;
    p2.name="Facebook";
    mycode python;
    python+=p1; // adding arguments
    python+=p2;
    cout<<python<<endl;
}
