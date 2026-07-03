#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        a.push_back(0);
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            a.push_back(temp);
        }
        a.push_back(x);
        n=a.size();
        long long max_dist=INT_MIN;
        for(int i=1;i<n;i++){
            if(i==n-1){
                max_dist=max(max_dist,2*(a[i]-a[i-1]));
            }
            else{
                max_dist=max(max_dist,a[i]-a[i-1]);
            }
        }
        cout<<max_dist<<endl;
    }
}