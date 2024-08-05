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
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string ans;

        int tt = 0;
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            for (int i = 0; i <= s.size(); ++i) {
                string y = s.substr(0, i);
                string z = s.substr(i);
                
                string pp = y + ch + z;
                
                int x = 2;
                for (int j = 1; j < pp.size(); ++j) {
                    if (pp[j] == pp[j - 1]) x += 1;
                    else x += 2;
                }

                if (x > tt) {
                    tt = x;
                    ans = pp;
                }
            }
        }

        cout << ans << '\n';
    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}