// This program shows the reading and writing inside a file using fstream library
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    fstream myfile;
    myfile.open("files.txt",ios::out); // Write to the file
    if(myfile.is_open()){
        myfile<<"Hello World!\n";
        myfile<<"This is second\n";
        myfile.close();
    }
    
    myfile.open("files.txt",ios::in); // read from the files.
    std::string str;
    while(getline(myfile,str)){
        std::cout<<str<<std::endl;
    }
    myfile.close();
}
