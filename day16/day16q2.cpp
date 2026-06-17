#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,3,4};
    int n=7;

    int ans=arr[0],max=0;

    for(int i=0;i<n;i++){
        int count=0;

        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }

        if(count>max){
            max=count;
            ans=arr[i];
        }
    }

    cout<<ans;
}