#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

int main(){
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        int sum = 0;
        int k = a;
        while(k != 0){
            int x = k%10;
            sum += x;
            k /= 10;
        }

        if(gcd(a, sum) <= 1){
            a++;
            
        }
        
    }

    // int  n = 311;

    // int sum = 0;
    // while(n>0){
    //     int x = n%10;
    //     sum += x;
    //     n = n/10;
    // }

    // cout << sum << '\n';

    return 0;
}