#include <bits/stdc++.h>
using namespace std;

int main(){

    int score=0;
    int ans;

    cout<<"Q1. Capital of India?\n";
    cout<<"1. Mumbai\n2. Delhi\n3. Kolkata\n";

    cin>>ans;

    if(ans==2)
        score++;


    cout<<"Q2. C++ is a?\n";
    cout<<"1. Programming Language\n2. Browser\n3. OS\n";

    cin>>ans;

    if(ans==1)
        score++;


    cout<<"Your Score: "<<score<<"/2";

    return 0;
}