#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    stack<int> st;
    st.push(a[0]);
    for(int i=1;i<n;i++){
        while(!st.empty()&& st.top()<a[i]) a[i]=st.top();
        st.push(a[i]);
    }
    long long ans = 0;
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout << ans << "
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