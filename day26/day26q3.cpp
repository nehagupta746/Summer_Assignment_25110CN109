#include <bits/stdc++.h>
using namespace std;

int main(){

    int balance=5000;
    int choice, amount;

    cout<<"1. Check Balance\n";
    cout<<"2. Withdraw Money\n";
    cout<<"3. Deposit Money\n";

    cin>>choice;

    switch(choice){

        case 1:
            cout<<"Balance: "<<balance;
            break;

        case 2:
            cout<<"Enter amount: ";
            cin>>amount;

            if(amount<=balance){
                balance-=amount;
                cout<<"Withdraw successful\n";
                cout<<"Remaining Balance: "<<balance;
            }
            else
                cout<<"Insufficient Balance";

            break;

        case 3:
            cout<<"Enter amount: ";
            cin>>amount;

            balance+=amount;

            cout<<"Deposit successful\n";
            cout<<"Balance: "<<balance;

            break;

        default:
            cout<<"Invalid choice";
    }

    return 0;
}