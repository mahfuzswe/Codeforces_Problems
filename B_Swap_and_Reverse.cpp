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
     int n,k; cin>>n>>k;
     string s; cin>>s;
     if(k&1){
        string odd, even;
        flp(i,0,n){
            if(i&1) odd += s[i];
            else even += s[i];
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        int i1 = 0, j1 = 0;
        string ans;
        flp(i,0,n){
            if(i&1) ans += odd[i1++];
            else ans += even[j1++];
        }
        cout<<ans<<'\n';
     }else{
        sort(s.begin(), s.end());
        cout<<s<<'\n';
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