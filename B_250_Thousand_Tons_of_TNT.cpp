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
        
int gcd(int a, int b){if(a%b==0) return b; else return gcd(b, a%b);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      for (int i = 1; i <= n; i++){
        cin>>a[i];
      } 
      int ans = 0;
      for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                int mx = 0, mi = 1e18;
                for (int j = 1; j <= n; j += i) {
                    int sum = 0;
                    for (int k = j; k <= j + i - 1; k++) sum += a[k];
                    mx = max(mx, sum);
                    mi = min(mi, sum);
                }
                ans = max(ans, mx - mi);
            }
        }
        cout<<ans<<'\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}