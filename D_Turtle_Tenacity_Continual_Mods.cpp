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

        int x = arr[0];

        for(int i=1; i<n; i++){
            x %= arr[i];
        }

        sort(arr, arr+n);

        int y = arr[0];
        for(int i=1; i<n; i++){
            y %= arr[i];
        }

        int z = arr[n-1];
        for(int i=n-2; i>=0; i--){
            z %= arr[i];
        }

        if(x ==1 || y == 1 || z == 1) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}