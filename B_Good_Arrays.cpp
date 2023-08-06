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
     int n; cin>>n;
     vector<int>a(n);
     for(int i=0; i<n; i++) cin>>a[i];

     int sum = 0, cnt = 0;
     for(int x: a){
        sum += x;
        if(x == 1) cnt++;
     }

     if(sum >= cnt + n && n>1){
        cout<<"YES"<<'\n';
     }else{
        cout<<"NO"<<'\n';
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