#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int x=0;
        for(auto it:mp){
            if(it.second%2==1) x++;
        }
        if(x>k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}