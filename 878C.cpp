#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    
    int t; cin>>t;
    while(t--){
        int n,k,q; cin>>n>>k>>q;
        ll ans = 0;
        int lst = 0;
        for(int i=1; i<=n; i++){
        int x; cin>>x;
        if(x>q) lst = i;
        ans += max(0, (i-k+1)-lst);
    }
        cout<<ans<<"\n";
    }

    return 0;
}

