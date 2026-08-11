#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll sum=b;
        for(int i=0;i<n;i++){
            sum+=min(a-1,arr[i]);
        }
        cout<<sum<<endl;
    }
}