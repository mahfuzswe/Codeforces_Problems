#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int n, k; 
    cin >> n >> k;

    int d = ((n / 2) / (k + 1));
    int c = d * k;
    int w = n - c - d;

    cout << d << " " << c << " " << w << '\n';

    return 0;
}