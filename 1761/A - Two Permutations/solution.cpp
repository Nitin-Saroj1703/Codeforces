#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==1) cout<<"Yes"<<endl;
        else{
            if(a+b<=n-2 || (a==n && b==n)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}