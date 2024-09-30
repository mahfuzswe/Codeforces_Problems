#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    string s; cin >> s;

    string ans;
    for(auto x: s){
        ans.push_back(x);
        int n = ans.size();
        if(n >= 3){
            if(ans[n-1] == 'C' and ans[n-2] == 'B' and ans[n-3] == 'A'){
                ans.pop_back();
                ans.pop_back();
                ans.pop_back();
            }
        }
    }
    cout << ans << '\n';

    return 0;
}