#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        int ans = 0;
        for(int i=0; i<n; i++){
            int mx = -2e18;
            int j = i;
            while(j<n && ((arr[j] > 0 && arr[i] > 0) || (arr[j] < 0 && arr[i] < 0))){
                mx = max(mx, arr[j]);
                j++;
            }

            ans += mx;
            i = j - 1;
        }
        cout << ans << '\n';
    }

    return 0;
}