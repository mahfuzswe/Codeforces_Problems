#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        int ans = 0;
        for(ll pw = 1; pw<=n; pw = pw * 10 +1){
            for(int d = 1; d<=9; d++){
                if(pw*d<=n){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

