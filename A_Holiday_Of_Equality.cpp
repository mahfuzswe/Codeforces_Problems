#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 

    sort(arr, arr+n);
    int ans = 0;

    for(int i=0; i<n-1; i++){
        ans += arr[n-1] - arr[i];
    }
    cout << ans << '\n';

    return 0;
}