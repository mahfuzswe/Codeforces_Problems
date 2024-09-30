#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin>> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        if((a%2 == 0 and b%2 == 0) or (a%2 == 0 and a>= 2)) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}