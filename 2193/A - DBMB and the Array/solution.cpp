#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;
 
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int v;
            cin >> v;
            sum += v;
        }
 
        if(s < sum) {
            cout << "NO
";
        }
        else if((s - sum) % x == 0) {
            cout << "YES
";
        }
        else {
            cout << "NO
";
        }
    }
}