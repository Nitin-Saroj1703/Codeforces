#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long sum=(n*(n+1))/2;
        long long mnSum=(k*(k+1)/2);
        if(sum>=x && mnSum<=x && (sum - ((n-k)*(n-k+1))/2) >= x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}