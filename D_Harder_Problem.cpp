#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    vector<int> lagbe;
    vector<bool> present(n + 1, false);
    for(int i = 0; i < n; ++i) present[a[i]] = true;
    for(int i = 1; i <= n; ++i) {
        if(!present[i]) lagbe.push_back(i);
    }

    vector<bool> oh(n + 1, false);
    vector<int> shit;
    int lagbe_index = 0;

    for(auto &k : a){
        if(!oh[k]) {
            oh[k] = true;
            shit.push_back(k);
        } else {
            shit.push_back(lagbe[lagbe_index++]);
        }
    }

    for(auto &dukh : shit) cout << dukh << " ";
    cout << '\n';
}

int main(){ 
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}