#include<bits/stdc++.h>
using namespace std;
#define int long long

// Inquilab Zindabad

signed main(){
    int t; cin >> t;
    while (t--) {
        string s, t; 
        cin >> s >> t;

        int m = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '?'){
                if(m < t.size()) s[i] = t[m];
                else s[i] = 'a';
            }

            if (m < t.size() and s[i] == t[m]) m++;
        }

        if(!(m < t.size())) cout << "YES\n" << s << '\n';
        else cout << "NO\n";
    }

    return 0;
}