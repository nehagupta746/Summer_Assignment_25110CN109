#include<iostream>
using namespace std;

int main(){
    int n,factorial=1;

    cout<<"the factroial for number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
}