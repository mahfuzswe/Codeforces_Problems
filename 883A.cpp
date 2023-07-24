#include<bits/stdc++.h>
#define int long long
#define pb push_back;
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
using namespace std;


void mr_phoenix(){
    int n; cin>>n;
    int ans =0;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        if(a>b) ans++;
    }
    cout<<ans<<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
        mr_phoenix();
    }
    

    return 0;
}