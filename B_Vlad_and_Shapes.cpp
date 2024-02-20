#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        set<int>ss;
        
        while(n--){
            int x = 0;
            string s; cin >> s;
            for(int i=0; i<s.size(); i++){
                if(s[i] == '1') x++;
            }
            ss.insert(x);
        }

    //    int sum = 0;
    //    for (auto it = ss.begin(); it != ss.end(); it++) {
    //         int y = *it;
    //         sum += y;
    //     }

        int ans = ss.size();
        if(ss.find(0) != ss.end()) {
            ans -= 1;
        }

        if(ans == 1) cout << "SQUARE\n";
        else cout << "TRIANGLE\n";
    }

    return 0;
}