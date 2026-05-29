#include <iostream>
using namespace std ;

int main (){
    
    int n,ld,rev=1;
    cout<<"enter the number:";
    cin>>n;

    while(n>0){
ld=n%10;
rev=rev*ld;
n=n/10;

}   
cout<<rev;
return 0;
}