// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

bool isPrime(int n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return n > 1;
}

// what to think | how to think | don't be stupid
signed main(){
    int n, k; cin >> n >> k;
    
    vector<int>v; // storing primes in v
    for(int i=2; i <= n; i++){
        if(isPrime(i)) v.push_back(i);
    }

    int ans = 0;
    for(int i=0; i<v.size() - 1; i++){
            int num = 1 + v[i] + v[i+1];
            if(isPrime(num) and num <= n) ans++;
    }

    cout << (ans >= k ? "YES\n" : "NO\n");

    return 0;
}


