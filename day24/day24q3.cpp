#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    string word="", longest="";

    for(int i=0;i<=s.length();i++){

        if(i<s.length() && s[i]!=' ')
            word+=s[i];

        else{
            if(word.length()>longest.length())
                longest=word;

            word="";
        }
    }

    cout<<longest;

    return 0;
}