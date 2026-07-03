#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
 
        int ans = INT_MAX;
        // Try every unique value as the meeting target
        for(int i = 0; i < n; i++){
            int target = arr[i];
            int left = 0, right = 0;
            for(int j = 0; j < n; j++){
                if(arr[j] < target) left++;
                if(arr[j] > target) right++;
            }
            ans = min(ans, max(left, right));
        }
        cout << ans << "
";
    }
}