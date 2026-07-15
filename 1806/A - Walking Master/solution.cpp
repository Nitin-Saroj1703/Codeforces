#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b) cout<<-1<<endl;
        else{
            int m=d-b;
            a+=m;
            if(a<c) cout<<-1<<endl;
            else{
                int n=a-c;
                cout<<m+n<<endl;
            }
        }
    }
}