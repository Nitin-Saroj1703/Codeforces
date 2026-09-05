#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> ones;
        int first_neg = -1, last_neg = -1;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 1) ones.push_back(i);
            if(v[i] == -1){
                if(first_neg == -1) first_neg = i;
                last_neg = i;
            }
        }
        
        int mx = -1, l = -1, r = -1;
        
        if(ones.empty()){
            if(first_neg != -1){
                l = first_neg;
                r = last_neg;
                mx = r - l + 1;
            }
        } else {
            for(int i = 0; i < ones.size() - 1; i++){
                if(ones[i+1] - ones[i] + 1 > mx){
                    mx = ones[i+1] - ones[i] + 1;
                    l = ones[i];
                    r = ones[i+1];
                }
            }
            if(first_neg != -1 && first_neg < ones[0]){
                if(ones[0] - first_neg + 1 > mx){
                    mx = ones[0] - first_neg + 1;
                    l = first_neg;
                    r = ones[0];
                }
            }
            if(last_neg != -1 && last_neg > ones.back()){
                if(last_neg - ones.back() + 1 > mx){
                    mx = last_neg - ones.back() + 1;
                    l = ones.back();
                    r = last_neg;
                }
            }
        }
        
        if(l != -1 && v[l] == -1) v[l] = 1;
        if(r != -1 && v[r] == -1) v[r] = 1;
        
        for(int i = 0; i < n; i++){
            if(v[i] == -1) v[i] = 0;
            cout << v[i] << " ";
        }
        cout << "
";
    }
    return 0;
}