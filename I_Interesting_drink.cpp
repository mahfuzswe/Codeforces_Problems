#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int shops; cin >> shops;
    vector<int>prices(shops);

    for(int i = 0; i < shops; ++i) cin >> prices[i];
    sort(prices.begin(), prices.end());

    int days; cin >> days;
    for(int i = 0; i < days; ++i){
        int x; cin >> x;
        int ans = prev(upper_bound(prices.begin(), prices.end(), x)) - prices.begin();
        cout << ans + 1 << '\n';
    }

    return 0;
}