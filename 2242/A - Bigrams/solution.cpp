#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2){
                count++;
            }
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]>=3){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            else if(arr[i]==2 && count>=2){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}