// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << '\n';
    }

    return 0;
}