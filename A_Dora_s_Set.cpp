#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

bool isPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}


signed main(){
    int t; cin >> t;

    // vector<bool>mark(N, 1);
    // vector<int>primes;

    // for(int i = 2; i < N; ++i){
    //     if(mark[i]){
    //         primes.push_back(i);
    //         for(int j = 2*i; j <= N; j += i) mark[j] = 0;
    //     }
    // }


    while(t--){
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        for(int i = l; i <= r; ++i){
            if(isPrime(i)) cnt++;
        }

        cout << cnt%3 << '\n';
    }
    
    return 0;
}