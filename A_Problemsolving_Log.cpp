#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<char, int>mpp;

        string s; cin >> s;
        for(auto x: s){
            mpp[x]++;
        }

        int ans = 0;

        for(auto y: mpp){
            if(y.second >= y.first-'A'+1){
                ans ++;

            }
        }
        cout << ans << '\n';
    }

    return 0;
}
