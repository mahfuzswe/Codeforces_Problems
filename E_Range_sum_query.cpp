#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mahfuzswe(){
    
    int n,q; cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int prefix[n];
    prefix[0] = arr[0];

    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    while(q--){
        int l,r; cin>>l>>r;
        r -= 1;
        l -= 1;
        if(l==0) cout<<prefix[r]<<'\n';
        else cout<<prefix[r]-prefix[l-1]<<'\n';
    }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}