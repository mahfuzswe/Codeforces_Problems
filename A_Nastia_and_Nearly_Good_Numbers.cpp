// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

/*
    b = 1 --> NO
    b = 2 --> a + 3a = 4a
    else a + (b - 1) = a*b
*/

// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        
        if(b == 1) cout << "NO\n";
        else if(b == 2){
            cout << "YES\n";
            cout << a << " " << 3*a << " " << 4*a << '\n';
        }
        else{
            cout << "YES\n";
            cout << a << " " << (b - 1) * a << " " << a * b << '\n';
        }
    }

    return 0;
}