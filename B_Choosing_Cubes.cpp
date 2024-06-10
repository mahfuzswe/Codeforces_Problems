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
#define NeedForSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int M = 1e9+7; // MOD
int expo(int a,int b){int res=1;while(b){if(b%2)res=(res*a)%M;a=(a*a)%M;b/=2;}return res;}
int gcd(int a, int b){if(a==0) return b; return gcd(b%a,a);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
/*_____________________________________________________________________________________________*/
// sky high, sir! don't give up..
// easy, you can do it! 
        
void mahfuzswe(){
    int t; cin>>t;
    while(t--){
        int n, f, k; cin >> n >> f >> k;

        vector<int>v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int fv = v[f-1];
        // cout << fv << '\n';

        sort(v.rbegin(), v.rend());

        int baki = n - k;
        int cnt = 0;
        bool hae = false;

        if(baki){
            for(int i = k; i < n; i++){
                if(v[i] == fv) cnt++;
            }
        }
  
        for(int i = 0; i < k; i++){
            if(v[i] == fv){
                hae = true;
                break;
            }
        }

        // for(int i = 0; i < n; i++) cout << v[i] << " ";
        // cout << '\n';

        // cout << cnt << '\n';

        if(cnt == 0) cout << "YES\n";
        else{
            if(!hae) cout << "NO\n";
            else cout << "MAYBE\n";
        } 
    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}