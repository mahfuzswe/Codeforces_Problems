#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        if(!(x&1)) x--;
        cout << x << " ";
    }
    
    return 0;
}