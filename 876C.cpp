#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int arr[n], cnt = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        if (arr[n - 1] == 1){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        
        for (int i = n - 1; i >= 0; i--){
            if (arr[i] == 1) cnt++;
            if (i && arr[i] == 1 && arr[i - 1] == 1) cout << "0 ";
            else if (arr[i] == 1){
                cout << cnt << ' ';
                cnt = 0;
            }
            else cout << "0 ";
        }
        cout << '\n';
    }
 
    return 0;
}