#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if(b/2 < a){
            if(n >= 2){
                int x = n/2;
                int r = n%2;

                cout << x*b + a*r << '\n';
            }
            else cout << n*a << '\n';
        }
        else cout << n*a << '\n';
    }
    
    return 0;
}