#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size()==1){
            cout<<-1<<endl;
        }
        else{
            vector<int> b;
            vector<int> c;
            sort(arr,arr+n);
            int max_freq;
            for(auto x:mp){
                if(x.first==arr[n-1]){
                    max_freq=x.second;
                }
            }
            cout<<n-max_freq<<" "<<max_freq<<endl;
            for(int i=0;i<n-max_freq;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            for(int i=n-max_freq;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}