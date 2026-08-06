#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int total=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
            mp[arr[i]]++;
        }
        int max_freq=0;
        int val=-1;
        for(auto x:mp){
            if(x.second>max_freq){
                max_freq=x.second;
                val=x.first;
            }
        }
        int other=n-max_freq;
        if(max_freq>other+1){
                int excess=max_freq-(other+2);
                total-=excess*val;
            }
        cout<<total<<endl;
    }
}