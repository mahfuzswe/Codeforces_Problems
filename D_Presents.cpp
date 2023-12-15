#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin>>n;
    int arr[n];

    for(int i=1; i<=n; i++){
        int x; cin>>x;
        arr[x] = i;
    }

    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}