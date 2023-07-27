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
     int arr[n];
     flp(i,0,n) cin>>arr[i];
     vector<int>v;
     int sum = 0;
     flp(i,1,n){
        v.pb(abs(arr[i] - arr[i-1]));
        sum += v.back();
     }
     sort(all(v));
     flp(g,1,k){
        sum -= v.back();
        v.pop_back();
     }
     cout<<sum<<'\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}