#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<b; ++i)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mr_phoenix(){
    int n; cin>>n;
    vector<int>cnt(n+1,0), mx(n+1,0);
    for(int i =0; i<n; ++i){
        int x; cin>>x;
        if(x<=n) ++cnt[x];
     }
     for(int i=1; i<=n; ++i){
        for(int j=i; j<=n; j+=i) mx[j] += cnt[i];
     }
     cout<<*max_element(all(mx))<<'\n';
}
        
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t=1; cin>>t;
    while(t--){
        mr_phoenix();
    }
    
    return 0;
}