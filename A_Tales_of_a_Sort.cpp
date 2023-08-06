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
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        } 

        int ans = 0;
        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                ans = max(ans, a[i]);
            }
        }
        cout<<ans<<'\n';
    }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}