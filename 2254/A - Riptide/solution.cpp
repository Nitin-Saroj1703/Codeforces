#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int round=0;
        while(true){
        if(a==b || b==c || c==a) break;
        int* val[3]={&a,&b,&c};
        int* mx=val[0];
        int* mn=val[0];
        for(int i=0;i<3;i++){
            if(*val[i]>*mx) mx=val[i];
            if(*val[i]<*mn) mn=val[i];
        }
        (*mx)--;
        (*mn)++;
        round++;
    }
    cout<<round<<endl;
}
}