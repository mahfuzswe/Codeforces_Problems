#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int cnt = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            while(i<n && arr[i] == 0){
                cnt++;
                i++;
            }
            if(cnt > ans) ans = cnt;
            cnt = 0;
        }

        cout << ans << '\n';
    }

    return 0;
}