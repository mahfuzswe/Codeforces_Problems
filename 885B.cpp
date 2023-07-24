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
        int n, k; cin>>n>>k;
        vector<int> c(n);
        for(int i=0; i<n; i++) cin>>c[i];

        vector<int> last(k, -1);
        vector<int> max_step(k), max2_step(k);
        for(int i=0; i<n; i++){
            int step = i - last[c[i]-1];
            if(step > max_step[c[i]-1]){
                max2_step[c[i]-1] = max_step[c[i]-1];
                max_step[c[i]-1] = step;
            }else if(step > max2_step[c[i]-1]) max2_step[c[i]-1] = step;
            last[c[i]-1]= i;
        }
        for(int i = 0; i<k; i++){
            int step = n-last[i];
            if(step>max_step[i]){
                max2_step[i] = max_step[i];
                max_step[i] = step;
            }else if(step>max2_step[i]){
                max2_step[i] = step;
            }
        }
        int ans = 1e9;
        for(int i=0; i<k; i++){
            ans = min(ans, max((max_step[i]+1)/2, max2_step[i]));
        }
        cout<<ans - 1 <<'\n';
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