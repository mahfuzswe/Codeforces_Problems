#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


// Practice like you've never won, Perform like you've never lost. 

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        string s; cin >> s;
        string cs = s;
        reverse(cs.begin(), cs.end());

        if(s < cs){
            cout << "YES\n";
            continue;;
        }

        set<char>ss;
        for(auto &u: s) ss.insert(u);

        cout << (ss.size() == 1 || k == 0 ? "NO" : "YES") << '\n';
    }
    
    return 0;
}