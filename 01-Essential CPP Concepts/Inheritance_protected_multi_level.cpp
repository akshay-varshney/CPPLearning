// This programm shows the usage of Multi level Inheritance also shows the Protected Inheritance Mode.
// Protected Inheritance mode: It means that it is a private variable and can be inherited
/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/

#include<iostream>
using namespace std;

//Protected members are private only but they allow the property that can be inherited into any other class.
class student {
protected:
    int class_id;
    float percentage;
public:
    const char *name;
    void set_values(int x, float y, const char *s);

};

void student::set_values(int x, float y, const char *s){
    class_id=x;
    percentage=y;
    name=s;
}

class teacher {
protected:
    int teacher_id;
    float salary;
public:
    const char * teacher_name;
    void set_teacher(int x1, float x2, const char *s1){
        teacher_id=x1;
        salary=x2;
        teacher_name=s1;
    }
};
// Multi Level Inheritance, driving two classes into derived class.
class school: public student, public teacher {
public:
    const char * schoolname;
    void display_data();
    
};

void school::display_data(){
    cout<<"This student name is : "<<name<<" and your student id is: "<<class_id<<endl;
    cout<<"This teacher named: "<<teacher_name<< " has given you this perctage: "<<percentage<<" %"<<endl;
    cout<<"School "<<schoolname<<"is giving you salary: "<<salary<<endl;
    
}
int main() {
    school bluebird;
    bluebird.set_values(109, 88.9, "Akshay");
    bluebird.set_teacher(11, 40000, "Manvi");
    bluebird.schoolname="BLUE BIRD";
    bluebird.display_data();
    school chill;
    chill.set_values(109, 98.9, "Ridhi");
    chill.set_teacher(11, 40000, "Jeff");
    chill.schoolname="Chill";
    chill.display_data();
}
