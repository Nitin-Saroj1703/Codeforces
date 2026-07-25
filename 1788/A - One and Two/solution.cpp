#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int nt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2) nt++;
        }   
        if(nt%2==1) cout<<-1<<endl;
        else{
            if(nt==0) cout<<1<<endl;
            else{
            int k=0;
            for(int i=0;i<n;i++){
                if(arr[i]==2){
                    k++;
                    if(k==(nt)/2){
                        k=i+1;
                        break;
                    }
                }
            }
            cout<<k<<endl;
            }
        }
    }
}