#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int ck(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}


signed main(){
    int t; cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;

        while(ck(x) % k != 0) x++;
        cout << x << '\n';
    }

    return 0;
}