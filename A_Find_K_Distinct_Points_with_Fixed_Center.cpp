#include<bits/stdc++.h>
using namespace std;

// Inquilab Zindabad

signed main(){
    int t; cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;

        for(int i = 1; i < k; i += 2){
            cout << x << " " << y - i << '\n';
            cout << x << " " << y + i << '\n';
        }

        if(k % 2) cout << x << " " << y << '\n';
    
    }
    
    return 0;
}