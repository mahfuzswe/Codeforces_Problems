#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for(auto &x : v) cin >> x;

    if(k >= 2) cout << "YES\n";
    else{
        vector<int>tmp = v;
        sort(v.begin(), v.end());
        if(v == tmp) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}