#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // Process the input for each test case
        string s;
        cin>>s;
        bool iscontinuous = false;
        int count = 0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                iscontinuous = true;
                count=2;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(!iscontinuous){
                if(s[i]=='.'){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}