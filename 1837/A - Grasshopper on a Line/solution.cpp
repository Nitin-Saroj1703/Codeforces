#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k==0){
            cout<<2<<"
"<<x-1<<" "<<1<<"
";
        }
        else{
            cout<<1<<"
"<<x<<"
";
        }
    }
}