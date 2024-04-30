#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);
        vector<int>v;

        for(int i = 1; i<=n; i++){
            int cnt = 1;
            while(arr[i] == arr[i-1]){
                cnt++;
                i++;
            }
            v.push_back(cnt);
        }

        int ans = 0;

        for(auto x : v){

            if(x >= 2){
                if(x <= k){
                ans ++;
            }
            else{
                int div, rem;
                div = x / k;
                if(x%k) div++;
                ans += div;

                div = 0;
                rem = 0;
            }
            }
            else{
                ans++;
            }           
        }
        cout << ans << '\n';
    }
    return 0;
}