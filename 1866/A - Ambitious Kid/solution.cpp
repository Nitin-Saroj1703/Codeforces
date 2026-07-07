#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long best = LLONG_MAX;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        best = min(best, (long long)abs(x));
    }
    cout << best << endl;
}