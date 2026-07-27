#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        int op=0;
        int ep=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int runs = 1;
        for(int i=1;i<n;i++)
            if((arr[i]%2) != (arr[i-1]%2)) runs++;
        cout << n - runs << endl;
    }
}