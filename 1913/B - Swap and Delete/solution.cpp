#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int n = s.size();
 
        int co = 0, cz = 0;
 
        for (char c : s) {
            if (c == '1')
                co++;
            else
                cz++;
        }
 
        int i = 0;
 
        while (i < n) {
            if (s[i] == '1') {
                if (cz == 0)
                    break;
                cz--;
            }
            else {
                if (co == 0)
                    break;
                co--;
            }
 
            i++;
        }
 
        cout << n - i << '
';
    }
}