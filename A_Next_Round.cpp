#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k; cin >> n >> k;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int c = 0;
    int ans = 0;

    if(v[k-1] > 0){
        c = v[k-1];
    }

    for(int i=0; i<n; i++){
        if(v[i] >= c && v[i] != 0) ans ++;
    }

    cout << ans << '\n';

    return 0;
}