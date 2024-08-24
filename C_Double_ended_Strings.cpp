#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int lcs(string &a, string &b){
    int mxln = 0;
    for(int i = 0; i < a.size(); ++i){
        for(int j = i; j < a.size(); ++j){
            string sub = a.substr(i, j - i + 1);
            if(b.find(sub) != string::npos){
                mxln = max(mxln, (int)sub.size());
            }
        }
    }
    return mxln;
}

signed main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;

        int lcs_len = lcs(a, b);
        int min_operations = (a.size() - lcs_len) + (b.size() - lcs_len);

        cout << min_operations << '\n';
    }
    
    return 0;
}