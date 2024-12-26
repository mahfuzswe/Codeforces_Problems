#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    
    vector<vector<int>>mat(n, vector<int>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> mat[i][j];
        }
    }

    int ans = 0;
    for(int diff = 1-n; diff < n; ++diff){
        int mn = INT_MAX;
        for(int j = 0; j < n; ++j){ // row
            int k = j + diff; // col
            if(k >= 0 && k < n){
                mn = min(mn, mat[j][k]);
            } 
        }
        if(mn < 0){
            ans += -mn; // when mn < 0 , -mn add absolute vlue of mn
        }
    }
    cout << ans << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}