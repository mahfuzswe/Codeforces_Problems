// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){
    int x; cin >> x;
    int a, b; 

    for(int i = 1; i*i <= x; i++){
        if(x % i) continue;
        if(__gcd(i, x/i) == 1) a = i;
    }
    cout << a << " " << x / a << '\n';

    return 0;
}