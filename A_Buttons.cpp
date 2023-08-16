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
        
void mr_phoenix(){
   int t;
   cin>>t;
   while(t--){
     int a,b,c; cin>>a>>b>>c;
     int aa = a+c;
     int bb = b+c;
     if(aa>bb) cout<<"First\n";
     else if(bb>aa) cout<<"Second\n";
     else if(aa == bb){
        if(c%2!=0) cout<<"First\n";
        else cout<<"Second\n";
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