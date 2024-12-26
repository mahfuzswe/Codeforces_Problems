#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;

    if(n <= 50 and (1LL << (n - 1)) < k){
        cout << "-1 "<< '\n';
        return;
    }
    k--;

    deque<int>a;
    vector<int>v;

    while(k){
        v.push_back(k & 1);
        k >>= 1;
    }

    while(v.size() < n - 1) v.push_back(0);
    a.push_back(n);

    int it = 0;
    for(int i = n - 1; i > 0; i--){
        if(v[it++]) a.push_back(i);
        else a.push_front(i);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ( i + 1 < n ? ' ' : '\n');
    }
}

int32_t main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}