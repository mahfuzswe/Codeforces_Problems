#include<bits/stdc++.h>
using namespace std;
#define int long long

int isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i<=n/2; i++){
        if(n%i==0) return false;
    }
    return true;
}

int32_t main(){
    int n; cin>>n;
    
    for(int i=2; i<=n; i++){
        if(isPrime(i)) cout<<i<<" ";
    }
    cout<<'\n';

    return 0;
}