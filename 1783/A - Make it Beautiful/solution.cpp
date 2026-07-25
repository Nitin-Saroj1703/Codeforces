#include<bits/stdc++.h>
using namespace std;
bool type(vector<int> &arr){
    // type-ugly/beautyful
    int n=arr.size();
    int sum=arr[0];
    for(int i=1;i<n;i++){
        if(sum==arr[i]){
            return false; // ugly
        }
        sum+=arr[i];
    }
    return true; // beauty
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
        }
        if(type(arr)){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            swap(arr[0],arr[n-1]);
            if(type(arr)){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}