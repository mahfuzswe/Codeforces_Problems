#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<int>v;

        for(int i=0; i<n; i++){
            if(arr[i] == 1){
                int x = i;
                v.push_back(x);
            } 
        }

        int ans  = 0;
        for(int i=0; i<v.size()-1; i++){
            int y = v[i+1] - v[i] - 1;
            ans += y;
        }

        cout << ans << '\n';
    }

    return 0;
}