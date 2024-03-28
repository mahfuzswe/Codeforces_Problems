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

        sort(arr, arr+n);

        int i, j;
        int mn = INT_MAX;

        for(int k = 0; k < n-1; k++){
            if(arr[k+1] - arr[k] < mn){
                mn = arr[k+1] - arr[k];
                i = k;
                j = k+1;
            }
        }

        if(n == 2){
            cout << arr[0] << " " << arr[1] << '\n';
        }
        else{
            for(int o = j; o<n; o++){
                cout << arr[o] << " ";
            }
            for(int p = 0; p <= i; p++){
                cout << arr[p] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}