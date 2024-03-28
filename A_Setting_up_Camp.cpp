#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
    
        if(b%3!=0 && b%3+c < 3){
            cout << -1 << '\n';
            continue;
        }
        cout << a+(b+c+2)/3 << '\n';
    }

    return 0;
}