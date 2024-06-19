// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int cnt[200005];

// what to think | how to think | don't be stupid
signed main(){
    int n, m; cin >> n >> m;
    int i, j;
    for(i = 0; i < n; ++i){
        cin >> j;
        j += m;
        cnt[j]++;
    }

    for(i = 0; i <=2*m; ++i){
        if(!cnt[i]){
            cout << i - m << '\n';
            break;
        }
    }

    return 0;
}


/*

*/