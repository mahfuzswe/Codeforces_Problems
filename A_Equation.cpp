#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int32_t main(){
    int n; cin >> n;
    int k = 4;
    int a, b;
    while(1){
        a = n + k;
        b = k;
        if(!isPrime(a) && !isPrime(b)){
            break;
        }
        k++;
    }

    cout << a << " " << b << '\n';

    return 0;
}