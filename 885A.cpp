#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb push_back;
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
using namespace std;


void mr_phoenix(){
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        int x, y; cin>>x>>y;

        string ans = "YES\n";
        for(int i=0; i<k; i++){
            int xx, yy; cin>>xx>>yy;
            if((x+y)%2 == (xx+yy)%2){
                ans = "NO\n";
            }
        }
        cout<<ans<<"\n";
    }
}

int32_t main(){

    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mr_phoenix();

    return 0;
}