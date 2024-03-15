#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        int x = 1;
        while(x*2 <= n){
            x *= 2;
        }
        cout << x << '\n';
    }

    return 0;
}