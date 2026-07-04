#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
        }
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            mn=min(mn,arr[i]);
        }
        if(arr[0]==mn) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}