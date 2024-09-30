#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    vector<int>tmp = a;

    sort(a.rbegin(), a.rend());
    vector<int>p(n, 0);
    p[0] = a[0];

    for(int i = 1; i < n; ++i){
        p[i] = p[i-1] + a[i];
    }

    sort(a.begin(), a.end());
    vector<int>k(n);
    for(int i = 0; i < n; ++i){
        // k[i] = find(a.begin(), a.end(), tmp[i]) - a.begin();
        k[i] = upper_bound(a.begin(), a.end(), tmp[i]) - a.begin(); 
        k[i] = n - k[i];

        // cout << k[i] <<" ";
    }

    for(int i = 0; i < n; ++i){
        if(k[i] == 0) cout << 0 << " ";
        else cout << p[k[i]-1] << " ";
    }
    cout << '\n';


    return 0;
}
