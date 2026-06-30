#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    string ans="";
    bool visited[256]={false};

    for(char c:s){

        if(!visited[c]){
            ans+=c;
            visited[c]=true;
        }
    }

    cout<<ans;

    return 0;
}