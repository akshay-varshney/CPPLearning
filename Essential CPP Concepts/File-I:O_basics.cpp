// This program shows the usage of the input output file in cpp

#include<cstdio>
#include<iostream>

using namespace std;
constexpr int repeat = 5;
int main() {
    const char * f1 = "file.txt";   // file name
    const char * str = "Akshay \n";

    // create/write the file
    std::cout<<"Started..."<<std::endl;
    FILE * f2 = fopen(f1, "w");
    for(int i = 0; i < repeat; i++) {
        fputs(str, f2);
        std::cout<<"Write "<<i<<std::endl;
    }
    
    fclose(f2); // Closing the file once done execution.
    std::cout<<"done."<<std::endl;
}
