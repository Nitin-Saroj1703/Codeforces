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
        int min_dist=arr[1]-arr[0];
        for(int i=2;i<n;i++){
            int dist=arr[i]-arr[i-1];
            min_dist=min(min_dist,dist);
        }
        if(min_dist<0) cout<<0<<endl;
        else if(min_dist==0) cout<<1<<endl;
        else cout<<(min_dist/2)+1<<endl;
    }
}