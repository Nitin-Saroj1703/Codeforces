#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,1,-1,-1},dy[4]={1,-1,-1,1};
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k_x,k_y,q_x,q_y;
        cin>>a>>b>>k_x>>k_y>>q_x>>q_y;
        set<pair<long long,long long>> king_hits,queen_hits;
        for(int i=0;i<4;i++){
            king_hits.insert({k_x+dx[i]*a,k_y+dy[i]*b});
            king_hits.insert({k_x+dx[i]*b,k_y+dy[i]*a});
 
            queen_hits.insert({q_x+dx[i]*a,q_y+dy[i]*b});
            queen_hits.insert({q_x+dx[i]*b,q_y+dy[i]*a});
        }
        int ans=0;
        for(auto x:king_hits){
            if(queen_hits.find(x)!=queen_hits.end()) ans++;
        }
        cout<<ans<<endl;
    }
}