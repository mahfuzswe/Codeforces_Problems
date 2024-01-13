#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int arr[4];
        for(int i = 0; i < 4; i++){
        cin >> arr[i];
        }

        int x = arr[0];

        sort(arr, arr+4);

        int ans = 0;

        for(int i = 0; i < 4; i++){
            if(arr[i] > x) ans++;
        }

        cout << ans << '\n';
    }
    
    return 0;
}