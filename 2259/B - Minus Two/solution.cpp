#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        
        int odds = 0;
        int mod4_0 = 0;
        int mod4_2 = 0;
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            
            if (x % 2 != 0) {
                odds++;
            } else if (x % 4 == 0) {
                mod4_0++;
            } else {
                mod4_2++;
            }
        }
        
        cout << max({odds, mod4_0, mod4_2}) << "
";
    }
}