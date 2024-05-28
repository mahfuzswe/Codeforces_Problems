// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

// lambda function to find the product of all digits of a number
auto prod = [] (int k){
    int z = 1;
    while(k != 0){
        z *= k % 10;
        k /= 10;
    }
    return z;
};


// what to think | how to think | don't be stupid
signed main(){
    int n; cin >> n;
    n++;

    int p = 1;
    int ans = 0;

    while( n != 0){
        ans = max(ans, prod(n * p - 1));
        n /= 10;
        p *= 10;
    }

    cout << ans << '\n';

    return 0;
}