#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        vector<long long> pre(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + arr[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l--, r--;
            long long target=0;
            target += pre[n-1] - (pre[r] - (l == 0 ? 0 : pre[l-1]));
            target+= 1LL * (r-l+1)*k;
            if(target%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}