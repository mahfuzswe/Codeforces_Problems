#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n;
    cout << ((n * n) + 1) / 2 << '\n';

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(((i + j) % 2)) cout << ".";
            else cout << "C";
        }
        cout << '\n';
    }

    return 0;
}