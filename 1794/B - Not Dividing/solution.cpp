#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int total_count=2*n;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                arr[i]++;
                total_count--;
            }
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]%arr[i]==0 && total_count>=0){
                arr[i+1]++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}