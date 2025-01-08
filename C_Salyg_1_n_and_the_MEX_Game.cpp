#include<bits/stdc++.h>
using namespace std;

namespace interactive{
    int ask(int x){
        cout << x << '\n';
        int y; cin >> y;
        return y;
    }
}

using namespace interactive;

void solve(){
    int n; cin >> n;
    vector<int>a(n);
    for(auto &u: a) cin >> u;

    int mex = 0;
    for(int &u: a){
        if(u ^ mex) break;
        else mex++;
    }

    for(int y = ask(mex); y >= 0; y = ask(y));
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}