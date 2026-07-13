#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        mx+=1;
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i]=abs(mx-arr[i]);
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}