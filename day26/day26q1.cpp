#include <bits/stdc++.h>
using namespace std;

int main(){

    int secret = 7;
    int guess;

    cout<<"Guess the number (1-10): ";
    cin>>guess;

    if(guess==secret)
        cout<<"Correct Guess!";
    else
        cout<<"Wrong Guess! Number was "<<secret;

    return 0;
}
