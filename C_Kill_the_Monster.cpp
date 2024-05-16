#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){ 
    int t; cin >> t;
    while(t--){
        int H, D; cin >> H >> D; // capital - Character
        int h, d; cin >> h >> d; // small - Monster

        int k, w, a; cin >> k >> w >> a;

        for(int i=0; i<=k; i++){
            int nH = H + (i * a);    // new health
            int nD = D + (k - i) * w;// new damage power

            int M = (h + nD - 1) / nD; // Monster can take M hits before die
            int C = (nH + d - 1) / d; // Character can take C hits before die

            if(M <= C){
                cout << "YES\n";
                break;
            }

            if(i == k) cout << "NO\n";
        }
    }

    return 0;
}