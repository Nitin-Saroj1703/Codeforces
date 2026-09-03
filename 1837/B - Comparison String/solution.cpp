#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int lcs=0;
        int match=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                lcs++;
            }
            else{
                match=max(match,lcs);
                lcs=0;
            }
        }
        match=max(match,lcs);
        cout<<match+2<<endl;
    }
}