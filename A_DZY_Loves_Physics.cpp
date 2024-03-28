#include<bits/stdc++.h>
#define int long long
using namespace std;

// comment

int32_t main(){
    int n, m; cin >> n >> m;
    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    double ans = 0;

    for(int i=0; i<m; i++){
        int a, b, w; cin >> a >> b >> w;

        double tmp = 1.0*(v[a-1] + v[b-1]) / w;
        ans = max(ans, tmp);
    }

    printf("%.15lf\n", ans);
 
    return 0;
}