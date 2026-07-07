#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char v[10][10];
        for(int i=0;i<10;i++){
            string s;
            cin>>s;
            for(int j=0;j<10;j++){
                v[i][j]=s[j];
            }
        }
        const int arr[10][10]={
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
        };
        int point=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(v[i][j]=='X'){
                    point+=arr[i][j];
                }
            }
        }
        cout<<point<<endl;
    }
}