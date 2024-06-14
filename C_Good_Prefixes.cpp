// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int arr_copy[n];
    copy(arr, arr+n, arr_copy);
    
    int ans = 0;
    sort(arr_copy, arr_copy+n);
    
    while(n--){
        int sum = 0;
        for(int i = 0; i <= n-1; i++){
            sum += arr[i];
        }
        if(sum == 0 || sum == arr_copy[n-1]) ans++;
    }

    cout << ans << '\n';

}

// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}