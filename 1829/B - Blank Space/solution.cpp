#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max_count_zero=0;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                max_count_zero=max(max_count_zero,count);
                count=0;
            }
            else count++;
        }
        max_count_zero=max(max_count_zero,count);
        cout<<max_count_zero<<endl;
    }
}