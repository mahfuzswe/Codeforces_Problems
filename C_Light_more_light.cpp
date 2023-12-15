#include<bits/stdc++.h>
using namespace std;

#define int long long

bool isPrime(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i=i+2){
        if(n%i == 0) return false;
    }
    return true;
}

int32_t main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(isPrime(n)) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}