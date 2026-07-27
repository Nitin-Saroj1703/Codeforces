#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int digit=n.length();
        int count=9*(digit-1)+stoi(n)/pow(10,digit-1);
        if(digit==1) count=stoi(n);
        cout<<count<<endl;
    }
}