#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n+1];
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

        if(arr[1]){
            cout << n+1 << " ";
            for(int i=1; i<=n; i++){
                cout << i << " ";
            }
        }
        else if(arr[n] == 0){
            for(int i=1; i<=n+1; i++){
                cout << i << " ";
            }
        }
        else{
            for(int i=1; i<n; i++){
                if(arr[i]!=arr[i+1]){
                    for(int j=1; j<=i; j++){
                        cout << j << " ";
                    }
                    cout << n+1 << " ";
                    for(int j=i+1; j<=n; j++){
                        cout << j << " ";
                    }
                    break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}