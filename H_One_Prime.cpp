#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int x; cin >> x;

    if(x >= 2){
        for(int i=2; i<x; i++){
        if(x % i == 0){
            cout << "NO\n";
            return 0;
        } 
    }
    cout << "YES\n";

    }
    else cout << "NO\n";
}