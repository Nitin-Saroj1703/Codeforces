#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    if(n==2) {
        cout << a[0] << " " << a[1] << "
";
        return;
    }
    bool valid = true;                   
    for(int i = 0; i < n-2; i++) {
        if(a[i] % a[i+1] != a[i+2]) {
            valid = false;
            break;
        }
    }
 
    if(valid)
        cout << a[0] << " " << a[1] << "
"; 
    else
        cout << -1 << "
";                   
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}