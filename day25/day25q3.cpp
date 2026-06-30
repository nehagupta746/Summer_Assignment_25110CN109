#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<string>name(n);

    for(int i=0;i<n;i++)
        cin>>name[i];

    sort(name.begin(),name.end());

    for(string s:name)
        cout<<s<<endl;

    return 0;
}