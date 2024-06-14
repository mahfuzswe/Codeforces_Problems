#include<bits/stdc++.h>
using namespace std;

#define int long long

int n;
map<int, int> mp;

int query(int index){
    if(index == 0 || index == n+1) return INT_MAX;
    if(mp.contains(index)) return mp[index];

    cout << "? " << index << endl;
    int value; cin >> value;
    return mp[index] = value;
}

signed main(){
    cin >> n;
    
    // increasing is true
    // decreasing is false

    int l = 0, r = n + 1;

    while(r - l > 1){
        int m = (l + r) / 2;
        (query(m) < query(m + 1)) ? (r = m) : (l = m);
    }

    cout << "! " << r << endl;

    return 0;
}  