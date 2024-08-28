#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string q = "";
        for(int i = 0; i < s.length(); ++i){
            q += "Yes";
        }

        if(q.find(s) != string::npos)
            cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}