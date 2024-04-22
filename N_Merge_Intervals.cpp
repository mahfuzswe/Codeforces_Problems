#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>v;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    for(auto x:v){
        cout << x.first << " " << x.second << '\n';
    }

    int start = v[0].first, end = v[0].second;
    for(int i=1; i<n; i++){
        if(end >= v[i].first){
            end = max(end, v[i].second);
        }else{
            cout << start << " " << end << '\n';
            start = v[i].first;
            end = v[i].second;
        }
    }
    cout << start << " " << end << '\n';
}

int32_t main(){

    solve();

    return 0;
}