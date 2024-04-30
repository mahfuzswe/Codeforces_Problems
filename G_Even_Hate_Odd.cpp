#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        
        if(n%2){ // if odd ==> impossible
            cout << -1 << '\n';
        }
        else{
            int cnt = 0; // cnt odd
            for(int i=0; i<n; i++){
                if(arr[i]%2) cnt++;
            }

            int ans = abs((n/2) - cnt);
            cout << ans << '\n';
            // cout << cnt << '\n';
        }
    }

    return 0;
}