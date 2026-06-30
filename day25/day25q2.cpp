#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;

    cin>>s1>>s2;

    int freq[256]={0};

    for(char c:s1)
        freq[c]++;

    string ans="";

    for(char c:s2){

        if(freq[c]>0){
            ans+=c;
            freq[c]--;
        }
    }

    cout<<ans;

    return 0;
}