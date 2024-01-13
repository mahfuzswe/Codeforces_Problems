#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        cout << "Division ";

        int n; cin >> n;
        if(n<=1399) cout << 4 << '\n';
        else if(n >= 1400 && n <= 1599) cout << 3 << '\n';
        else if(n >= 1600 && n <= 1899) cout << 2 << '\n';
        else cout << 1 << '\n';
    }

    return 0;
}