#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int red=0,blue=0;
        for(int i=0;i<2*n;i++){
            if(s[i]=='1'){
                if(s[(i+1)%(2*n)]=='0'){
                if(i%2==0){
                    red++;
                }else{
                    blue++;
                }
            }else{
                if(i%2==0){
                    blue++;
                }
                    else{
                        red++;
                    }
            }
            }
            
        }
        cout<<red<<" "<<blue<<endl;
    }
}