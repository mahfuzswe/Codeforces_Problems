#include<bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0) cout<<i<<'\n';
    }

    return 0;
}