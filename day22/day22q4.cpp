#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string ans="";

    for(char c:s){
        if(c!=' ')
            ans+=c;
    }

    cout<<ans;

    return 0;
}