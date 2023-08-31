#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mr_phoenix(){
   int t;
   cin>>t;
   while(t--){
     int x; cin>>x;
     vector<int>ans;
     ans.pb(1);

     while(ans.back()*2<x){
        ans.pb(ans.back()*2);
     }
     x -= ans.back();

     while(x){
        int msb = 31 - __builtin_clz(x);
        ans.pb(ans.back()+(1<<msb));
        x -= 1<<msb;
     }

     reverse(ans.begin(), ans.end());
     cout<<ans.size()<<'\n';

     flp(i,0,ans.size()){
        if(i) cout<<" ";
        cout<<ans[i];
     }cout<<'\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}