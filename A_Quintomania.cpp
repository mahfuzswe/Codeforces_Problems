#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }

        bool ck = 1;
        for(int i = 0; i < n-1; ++i){
            int x = abs(arr[i] - arr[i+1]);
            if(x == 5 or x == 7) continue;
            else{
                ck = 0;
                break;
            }
        }

        cout << (ck ? "YES" : "NO") << '\n';
    }
    

    return 0;
}