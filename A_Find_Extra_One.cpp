#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

/*
    if x all + or - --> yes
    else one - or + ---> yes
    else no
*/

signed main(){
    int n; cin >> n;
    int xPos = 0, xNeg = 0;

    int k = n; // storing original n in k

    while(n--){
        int x, y; cin >> x >> y;
        if(x > 0) xPos++;
        if(x < 0) xNeg++;
    }

    if(xPos == k or xNeg == k) cout << "Yes\n";
    else{
        if(xPos == 1 or xNeg == 1) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}