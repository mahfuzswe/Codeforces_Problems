#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    
    for(int k = 2; k < 30; ++k){
        long long x = (1LL << k) - 1;
        if(n % x == 0){
            cout << n / x << '\n';
            break;
        }
    }
}

int main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}