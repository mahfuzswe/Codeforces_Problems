#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == 0){
        cout << 1 << '\n';
        return;
    }

    int total = a + min(b, c) * 2 + min(a + 1, abs(b - c) + d);

    cout << total << '\n';
}

int main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0); 

    int t; cin >> t; 
    while(t--){
        solve();
    }

    return 0;
}
/*
    total jokes calculation:
    -> the comedian can tell jokes of type A
    -> they can tell min(b, c) * 2 jokes alternating between types B and C
    -> they can tell additional jokes by using the remaining jokes of type B or C and type D but not exceeding a + 1 jokes


*/