#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    stack<int>st;

    for(int i = 0; i < n; ++i){
        string s; cin >> s;
        
        for(int j = 0; j < 4; ++j){
            if(s[j] == '#') st.push(j+1);
        }
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << '\n';


}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}