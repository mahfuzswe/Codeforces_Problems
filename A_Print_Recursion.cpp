#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void Print(int n){
    if(n == 0) return;
    cout << "I love Recursion\n";
    return Print(n-1);
}

signed main(){
    int n; cin >> n;
    Print(n);
    
    return 0;
}