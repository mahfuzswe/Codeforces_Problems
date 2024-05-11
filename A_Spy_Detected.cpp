#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        
        int ans = -1;

        for(int i=1; i<n-1; i++){
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                ans = i;
                break;
            }
        }

        if(ans == -1){
            if(arr[0] != arr[1]) ans = 0;
            else ans = n-1;
        }

        cout << ans+1 << '\n';

    }

    return 0;
}