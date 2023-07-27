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
        
void mr_phoenix() {
    int n, c; cin >> n >> c;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = 1, r = 1e9;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        int sumall = 0;
        for(int i = 0; i < n; ++i) {
            sumall += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sumall > c) break;
        }
        if(sumall == c) {
            cout << mid << "\n";
            return;
        }
        if(sumall > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        mr_phoenix();
    }
}