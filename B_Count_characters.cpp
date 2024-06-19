// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){
    string s; cin >> s;
    
    map<char, int>mp;
    for(auto &u: s){
        mp[u]++;
    }

    for(auto &x: mp){
        cout << x.first << " " << x.second << '\n';
    }

    return 0;
}