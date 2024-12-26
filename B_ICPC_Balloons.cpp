#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<int>ck(91, 1);

        int ans = 0;
        for(int i = 0; i < n; ++i){
            int ch = (int)s[i];
            if(ck[ch]){
                ans += 2;
                ck[ch] = 0;
            }
            else ans += 1;
        }

        cout << ans << '\n';
    }


    return 0;
}