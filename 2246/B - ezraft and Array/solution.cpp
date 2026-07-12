#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout<<1<< endl;
            continue;
        }
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        vector<long long> a;
        long long S;
        if(n % 2 == 1){
            a = {1, 2, 3};
            S = 6;
        } else {
            a = {1, 2, 3, 6};
            S = 12;
        }
        while((int)a.size() < n){
            a.push_back(S);
            a.push_back(2*S);
            S = 4*S;
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " 
"[i == n-1];
        }
    }
}