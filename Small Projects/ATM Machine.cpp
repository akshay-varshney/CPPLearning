#include<iostream>

using namespace std;
float balance=500;
class ATM {
public:
    void showmenu();
    void display();
    float deposit(float x);
    float withdraw(float x);
};
void ATM::showmenu(){
    cout<<"***************ATM  Menu********************"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"*********************************************"<<endl;
}
void ATM::display(){
    std::cout<<"Your Balance is: "<<balance<<"$"<<std::endl;
}
float ATM::deposit(float x){
    return balance+x;
}

float ATM::withdraw(float y){
    if(y>balance){
        return -1;
    }
    else{
        return balance-y;
    }
}

int main(){
    int option;
    ATM axis;
   
    axis.showmenu();
    cin>>option;
    switch(option){
        case 1:
            axis.display();
            break;
        case 2:
            cout<<"How much money you want to deposit? "<<endl;
            float val;
            cin>>val;
            axis.deposit(val);
            break;
        case 3:
            cout<<"How much money you want to Withdraw? "<<endl;
            float val2;
            cin>>val2;
            float va=axis.withdraw(val2);
            if(va==-1){
                cout<<"You don't have sufficient balance";
            }
            else{
                cout<<"Please Wait Money is getting withdrawn: "<<va<<endl;
            }
            break;            
        
    }
}
