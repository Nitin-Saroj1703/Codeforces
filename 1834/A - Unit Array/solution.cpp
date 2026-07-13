#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int l=0; //count of -1 
        int k=0; //count of +1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0) k++;
            else l++;
        }
        int op=0;
        while(k<l ||l%2==1){
            k++;
            l--;
            op++;
        }
        cout<<op<<endl;
    }
}