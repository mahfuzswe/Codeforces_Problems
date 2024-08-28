#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n, k;
    cin >> n >> k;

    vector<int>a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    vector<int>b(k);
    for(int i = 0; i < k; ++i) cin >> b[i];

    sort(b.rbegin(), b.rend());

    int j = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 0){
            a[i] = b[j];
            j++;
        }
    }

    bool ck = true;
    for(int i = 0; i < n-1; ++i){
        if(a[i] >= a[i+1]) ck = false;
    }
    // not increasing -> yes

    cout << (ck ? "No" : "Yes") << '\n';

    return 0;
}