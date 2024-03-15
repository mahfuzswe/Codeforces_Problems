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
        int n; cin >> n;
        
        vector<int>v;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            v.pb(x);
        }

        bool valo_na = false;
        int last = v[n-1];

        for(int i=n-2; i>=0; i--){
            if(v[i] <= last){
                last = v[i]; 
                continue;
            }

            if(v[i] % 10 > last){
                valo_na = true;
                break;
            }

            if(v[i] / 10 > v[i] % 10){
                valo_na = true;
                break;
            }

            last = v[i] / 10;
        }

        cout << (!valo_na ? "YES" : "NO") << '\n';

    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}