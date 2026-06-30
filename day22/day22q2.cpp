#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int count=0;
    bool word=false;

    for(char c:s){
        if(c!=' ' && !word){
            count++;
            word=true;
        }
        else if(c==' ')
            word=false;
    }

    cout<<count;

    return 0;
}