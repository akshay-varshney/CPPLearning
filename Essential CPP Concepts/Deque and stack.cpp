//Deque usage. It will allow the insertion from both end. It also allows the random access.

#include<iostream>
#include<deque>
#include<stack>

using namespace std;

int main() {
    deque<int>d1;
    int temp;
    for(int i=0;i<5;i++){
        cin>>temp;
        d1.push_back(temp);
    }
    for(int i=0;i<d1.size();i++){
        cout<<d1.at(i)<<endl;
    }
    //Printing elements through Iterator
    deque<int>::iterator it;
    for(it=d1.begin();it<d1.end();it++){
        cout<<*it<<endl;
    }
    temp=0;
    
    // Stack will allow the insertion from one end only.
    stack<int> numbers;
    cout<<"Pushing...\n";
    while(temp>=0){
        cout<<"Enter numbers: ";
        cin>>temp;
        if(temp>=0)
            numbers.push(temp);
    }
    while(numbers.size()>0){
        cout<<numbers.top()<<" ";
        numbers.pop();
    }
    
}
