#include<iostream>
using namespace std;

int main(){
     int n;

     cout<<"enter the number for which table is to be written:";
     cin>>n;

     for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
     }
     return 0;
}
