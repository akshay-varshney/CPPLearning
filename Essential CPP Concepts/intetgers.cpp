// 02_03_dereference.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;


int main()
{
    double testScores[5]={1,2,3,4,5};
    double* pTestScores[5];
//    pTestScores = testScores;
    
    for(int i=0;i<5;i++){
        cout<< *(pTestScores +i)<< endl;
    }
    return 0;
}

