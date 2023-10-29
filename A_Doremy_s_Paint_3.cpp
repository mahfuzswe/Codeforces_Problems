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
        
void mahfuzswe(){
   int t; cin>>t;
   while(t--){
    int n; cin >> n;
    vector<int>v(n);
    map<int, int>mp;
    flp(i,0,n) cin>>v[i], mp[v[i]]++;
    if(mp.size()>2) cout<<"No\n";
    else if(mp.size()==1) cout<<"Yes\n";
    else{
        int z = mp[v[0]];
        int rem = n-z;
        if(abs(z-rem)>1) cout<<"No\n";
        else cout<<"Yes\n";
    }
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}
