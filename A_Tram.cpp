#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;

    int a, b; cin >> a >> b;
    int sum = a+b;
    int ans = sum;
    n--;

    while(n--){
        int x, y; cin >> x >> y;
        sum -= x;
        sum += y;

        if(sum > ans) ans = sum;
    }

    cout << ans << '\n';

    return 0;
}