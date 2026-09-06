#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int diff=arr[0]-1;
        for(int i=1;i<n;i++){
            diff=__gcd(abs(arr[i]-(i+1)),diff);
        }
        cout<<diff<<endl;
    }
}