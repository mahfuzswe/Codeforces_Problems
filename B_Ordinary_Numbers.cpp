#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n<10) cout << n << '\n';
        else{
            int cnt = 0;
            for(int i = 11; i <= n; i++){
                if(i%11 == 0) cnt++;
            }
            int ans = 9 + cnt;
            cout << 9+cnt << '\n';
        }
    }

    return 0;
}