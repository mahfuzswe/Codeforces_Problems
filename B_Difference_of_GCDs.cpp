#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        int n, l, r;
        cin >> n >> l >> r;

        vector<int>a(n);
        bool possible = true;

        for(int i = 1; i <= n; ++i){
            int multiple = ((l+i-1)/i)* i; // smallest multiple of i >= l
            if(multiple > r){
                possible = false;
                break;
            }
            a[i-1] = multiple;
        }

        if(possible){
            cout << "YES\n";
            for(int i = 0; i < n; ++i){
                cout << a[i] << " ";
            }
            cout << '\n';
        }
        else cout << "NO\n";

    }
    
    return 0;
}