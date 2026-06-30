#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int freq[256]={0};

    for(char c:s)
        freq[c]++;

    char ans;
    int maxi=0;

    for(char c:s){
        if(freq[c]>maxi){
            maxi=freq[c];
            ans=c;
        }
    }

    cout<<ans;

    return 0;
}