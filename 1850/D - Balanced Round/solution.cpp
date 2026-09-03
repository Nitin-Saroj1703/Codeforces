#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int balance=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1] <=k) count++;
            else{
                balance=max(count,balance);
                count=0;
            }
        }
        balance=max(count,balance);
        cout<<arr.size()-1-balance<<endl;
    }
}