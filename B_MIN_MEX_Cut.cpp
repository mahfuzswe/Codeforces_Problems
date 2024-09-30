#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    string s; cin >> s;
    
    int zeros = count(s.begin(), s.end(), '0');
    if(zeros == 0){
        cout << 0 << '\n';
        return;
    }

    int ones = count(s.begin(), s.end(), '1');
    if(ones == 0){
        cout << 1 << '\n';
        return;
    }

    int segments = 0;
    bool in_zero_segment = false;
    for(char c: s){
        if(c == '0'){
            if(!in_zero_segment){
                segments++;
                in_zero_segment = true;
            }
        }else{
            in_zero_segment = false;
        }
    }

    if(segments == 1) cout << 1 << '\n';
    else cout << 2 << '\n';
    
}


signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}