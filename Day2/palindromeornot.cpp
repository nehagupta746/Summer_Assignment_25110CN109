#include <iostream>
using namespace std ;

int main (){
    
    int n,original,ld,rev=0;
    cout<<"enter the number:";
    cin>>n;

    original=n;

while(n>0){
    ld=n%10;
    rev=rev*10+ld;
    n=n/10;
}
if(original==rev){
    cout<<"number is palindrome.";
}
else{
 cout<<"number is not a palindrome number.";}
    return 0;
}