#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    sort(a.begin(), a.end());
    a.erase(a.begin(), a.begin()+(n/2));

    n = a.size();
    int low = a[0], high = a[n-1] + k;
    int ans = low;
    while(low <= high){
        int mid = (low + high) / 2;

        int cost = 0;
        for(int x: a){
            if(x < mid) cost += mid - x;
        }

        if(cost > k) high = mid - 1;
        else{
            // ans = max(mid, ans);
            ans = mid;
            low = mid + 1;
        }
    } 

    cout << ans << '\n';

    return 0;
}