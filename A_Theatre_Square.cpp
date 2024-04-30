#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n, m, a; cin >> n >> m >> a;
    
    int x = n/a;
    if(n%a) x++;

    int y = m/a;
    if(m%a) y++;

    cout << x * y << '\n'; 
    return 0;
}