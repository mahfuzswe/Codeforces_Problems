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
        
void mahfuzswe() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> arr(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            string r; cin >> r;
            for (int j = 0; j < n; j++) {
                arr[i][j] = r[j] - '0';
            }
        }

        int p = n / k;
        vector<vector<int>> ans(p, vector<int>(p));
        int x = 0, y = 0;

        for (int i = 0; i < n; i += k) {
            y = 0;
            for (int j = 0; j < n; j += k) {
                ans[x][y] = arr[i][j];
                y++;
            }
            x++;
        }

        for (int i = 0; i < p; i++) {
            for (int j = 0; j < p; j++) {
                cout << ans[i][j];
            }
            cout << '\n';
        }
    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}