#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the number of natural numbers:";
    cin>>n;

    for(int i=1;i<=n;i++){
sum=sum+i;
    }
    cout<<sum;
    return 0;
}