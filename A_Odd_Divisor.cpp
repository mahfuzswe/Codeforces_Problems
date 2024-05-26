#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

/*
    all numbers has odd divisors > 1 
    if it can't be represent as only 2^x 
    easy! 

    12 = 2 x 2 x 3  --> yes
    16 = 2 x 2 x 2 x 2 --> no
*/

// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        while(n % 2 == 0) n /= 2;
        if(n == 1) cout << "NO\n";
        else cout << "YES\n"; // if n != 1 that means n > 1
    }

    return 0;
}