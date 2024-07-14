#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c; cin >> n >> c;
    int a, b; cin >> a;

    int ans = 1;
    for(int i = 1; i < n; ++i){
        cin >> b;
        if(b - a > c) ans = 1;
        else ans++;

        a = b;
    }
    cout << ans << '\n';
}