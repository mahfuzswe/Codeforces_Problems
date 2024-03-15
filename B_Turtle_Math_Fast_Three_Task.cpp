#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        
        int sum = 0;
        int cc = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
            if(arr[i]%3 == 1) cc = 1;
        }

        if(sum%3 == 0) cout << 0 << '\n';
        else if(sum%3 == 2) cout << 1 << '\n';
        else cout << 2-cc << '\n';        

    }

    return 0;
}