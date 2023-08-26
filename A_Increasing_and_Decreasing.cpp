#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<b; i++)
#define flb(i,a,b) for(int i=a; i>=0; i--)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mr_phoenix(){
   int t; cin>>t;
   while(t--){
     int x,y,n; cin>>x>>y>>n;
     vector<int>a; int cnt = 1;
     flp(i,0,n){
        a.pb(y); y = y-cnt;
        cnt++;
     }

    if(a[a.size()-1]<x) cout<<"-1"<<'\n';
    else{
        cout<<x<<" ";
        flb(i,a.size()-2,0){
            cout<<a[i]<<" ";
        }cout<<'\n';
      }
    }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}