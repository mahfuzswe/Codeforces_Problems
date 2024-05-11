#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    int ans = 0;
    if(n >= 2){
        int max = arr[n-1];
        for(int i=0; i<n-1; i++){
            ans += (max - arr[i]);
        }
    }

    cout << ans << '\n';

    return 0;
}