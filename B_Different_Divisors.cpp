#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

/*
1.      x
       / \
       p  q --> two distinct prime numbers

    so divisors of x : 1, p, q, pq


2.      x
       / \
       p  p^2 --> same prime
    
    divisors : 1, p , p^2, p^3

3.  p - 1 >= d ; p - q >= d ; pq - q >= d
    1, (1 + d) --> y , y + d , y^2, y^3

    ans = min(pq, p^3)
*/

// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        int d; cin >> d;
        int p, q;
        
        // let's find p
        for(int i = 1 + d; ; i++){
            int cnt = 0;
            for(int j = 2; j * j <= i; j++){
                if(i % j == 0) cnt++;
            }
            if(cnt == 0){
                p = i;
                break;
            }
        }

        // let's find q
        for(int i = p + d; ; i++){
            int cnt  = 0;
            for(int j = 2; j * j <= i; j++){
                if(i % j == 0) cnt++;
            }
            if(cnt == 0){
                q = i;
                break;
            }
        }

        // ¬_¬
        cout << min(p*q, p*p*p) << '\n';
    }

    return 0;
}