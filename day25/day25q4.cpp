#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<string>words(n);

    for(int i=0;i<n;i++)
        cin>>words[i];

    sort(words.begin(),words.end(),
    [](string a,string b){
        return a.length()<b.length();
    });

    for(string s:words)
        cout<<s<<endl;

    return 0;
}