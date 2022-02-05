// This program shows the usage of the exception handling in CPP

#include<iostream>
#include<string>

using namespace std;
class desktop {
    string name;
    int num_apps;
public:
    desktop(string x, int y) {
        name=x;
        num_apps=y;
    }
    void display(string app_name) {
        int req=(app_name.length())/10;
        //If the length becomes greater the required value it will throw an exception
        
        if(req>num_apps)
            throw "No Space";
        cout<<req<<endl;
        std::cout<<app_name<<std::endl;
        num_apps-=req;
        
    }
};

int main() {
    desktop github("Github",5);
    try{
        github.display("Github Desktop Application");
        github.display("Github Desktop Application");
        github.display("Github Desktop Application");
        github.display("Github Desktop Application");
    }
    // Excetion of a particualr data type can be handled by this..
    catch(const char * ptr){
        cout<<"Exception Occured: "<<ptr<<endl;
    }
    // If we want to handle any other data type we can use the default exception
    catch(...){
        cout<<"Exception Happened something went wrong"<<endl;
    }
    
}
